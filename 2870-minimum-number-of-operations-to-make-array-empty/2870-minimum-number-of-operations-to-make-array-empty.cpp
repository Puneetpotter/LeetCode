class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int, int> numFreq;
        int n=nums.size();
        int ans=0;
        
        for(int i=0; i<n; i++){
            numFreq[nums[i]]++;
        }
        
        for(auto i:numFreq){
            
            if(i.second<=1)
                return -1;
            
            if(i.second%3==0)
                ans+=i.second/3;
            
            else
                ans+=((i.second/3)+1);
        }
        
        return ans;
    }
};