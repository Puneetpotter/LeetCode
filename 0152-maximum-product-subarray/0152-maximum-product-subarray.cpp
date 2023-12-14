class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int globalMax=INT_MIN;
        int localMax=1;
        int n=nums.size();
        
        for(int i=0; i<n; i++){
            
            localMax*=nums[i];
            globalMax=max(globalMax, localMax);
            if(localMax==0)
                localMax=1;
            
        }
        
        localMax=1;
        for(int i=n-1; i>=0; i--){
            
            localMax*=nums[i];
            globalMax=max(globalMax, localMax);
            if(localMax==0)
                localMax=1;
            
        }
        
        return globalMax;
    }
};