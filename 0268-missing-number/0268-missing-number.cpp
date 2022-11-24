class Solution {
public:
    int missingNumber(vector<int>& nums) {
        map<int,int>m;
        for(int i=0;i<=nums.size();i++)
            m[i]=0;
        for(int i=0;i<nums.size();i++)
            m[nums[i]]++;
        for(int i=0;i<=nums.size();i++){
            if(m[i]==0)
                return i;
        }
        return 0;
    }
};