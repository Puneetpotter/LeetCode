class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        string prefix = strs[0];
        
        if(strs.size() == 1)
            return prefix;
        
        for(int i = 1; i < strs.size(); i++){
            
            int n = min(prefix.size(), strs[i].size());
            prefix.resize(n);
            
            string ans = "";
            
            for(int j = 0; j < n; j++){
                
                if(prefix[j] != strs[i][j])
                    break;
                
                ans.push_back(prefix[j]);
                
            }
            prefix = ans;
            
        }
        
        return prefix;
    }
};