class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> ans(2);
        map<int, int> count;
        int n=nums.size();
        
        for(auto i:nums){
            count[i]++;
            if(count[i]>1){
                ans[0]=i;
            }
        }
        
        for(int i=1; i<=n; i++){
            if(count[i]==0){
                ans[1]=i;
                break;
            }
        }
        return ans;
    }
};