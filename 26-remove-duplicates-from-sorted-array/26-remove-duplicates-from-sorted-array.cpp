class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      //  int count=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]==nums[j]){
                    nums.erase(nums.begin()+j);
                    j--;
                    //count++;
                }
            }
        }
        return nums.size();
    }
};