class Solution {
    int findpivot(vector<int>nums){
        int n=nums.size();
        int s=0;
        int e=n-1;
       int mid=s+(e-s)/2;
        while(s<e){
            if(nums[mid]>=nums[0]){
                s=mid+1;
            }
            else{
                e=mid;
            }
            mid=s+(e-s)/2;
        }
        return s;

    }
    int bin(vector<int>nums,int start,int end,int k){
        int s=start;
        int e=end;
        int mid=s+(e-s)/2;
        while(s<= e){
            if(nums[mid]==k){
                return mid;

            }
            else if(nums[mid]<k){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
            mid=s+(e-s)/2;

        }
        return -1;
    }

public:
    int search(vector<int>& nums, int k) {
        int pivot=findpivot(nums);
        int n=nums.size();
        int s=0;
        int e=nums.size()-1;
        int mid=s+(e-s)/2;
        if( k>=nums[pivot] && k<=nums[n-1]){
             return bin(nums,pivot,n-1,k);
            
        }
        else {
            return bin(nums,0,pivot-1,k);
           
        }

        return -1;
    }
};
