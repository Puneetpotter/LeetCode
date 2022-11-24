class Solution {
public:
    int search(vector<int>& nums, int target) {
        int beg=0;
        int end=nums.size()-1;
        int mid=(beg+end)/2;
        while(beg<=end){
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]<target)
                beg=mid+1;
            else
                end=mid-1;
            mid=(beg+end)/2;
        }
        return -1;
    }
};