class Solution {
    int nextu(vector<int>arr,int k){
int n=arr.size();
        stack<int> s;
        vector<int> ans1(n,-1);
       for(int i=n-1;i>=0;i--){
           int curr=arr[i];
        
          while(!s.empty() && s.top()<curr  ){ s.pop();
              }
           if(s.empty()){
               ans1[i]=-1;
           }
           else{
               ans1[i]=s.top();
               }
             
              s.push(curr);


       }
       return ans1[k];

    }
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                if (nums1[i]==nums2[j]){
                     ans.push_back(nextu(nums2,j));
                }
            }
        }



       return ans;
    }
};
