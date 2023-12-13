class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        
        map<int, vector<int>>m;
        int n=nums.size();
        int maxOccur=0;
        
        for(int i=0; i<n; i++){
            m[nums[i]].push_back(i);
            if(m[nums[i]].size()>maxOccur)
                maxOccur=m[nums[i]].size();
        }
        
        int minSubArray=INT_MAX;
        
        for(auto look:m){
            if(look.second.size()==maxOccur){
                int firstOccur=look.second[0];
                int lastOccur=look.second[maxOccur-1];
                minSubArray=min(minSubArray,lastOccur-firstOccur+1);
            }  
        }
        
        return minSubArray;
    }
};