class Solution {
public:
    int maximumValue(vector<string>& strs) {
        
        int n=strs.size();
        int globalMax=INT_MIN;
        
        for(int i=0; i<n; i++){
            int temp=0;
            if(all_of(strs[i].begin(), strs[i].end(), ::isdigit))
                temp=stoi(strs[i]);
            
            else
                temp=strs[i].size();
            
            globalMax=max(temp, globalMax);
        }
        
        return globalMax;
    }
};