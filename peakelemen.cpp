class Solution {
public:
    int findPeakElement(vector<int>& num) {
        int s=0;
       
        int e=num.size()-1;
        int mid=s+(e-s)/2;
        while(s<e){
            
            if(num[mid]<num[mid+1]){
                s=mid+1;

            }
           else {
               e=mid;

           }
           mid=s+(e-s)/2;
           
        }
       
        return s;
    }
};
