class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int ans=-1;
        int s=0;
        int e=nums.size()-1;
        int mid=(e+s)/2;
        while(s<=e){
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]<target){
                s=mid+1;
                ans=mid;
            }
            else
                e=mid-1;
           mid=(e+s)/2; 
        }
        return ans+1;
    }
};