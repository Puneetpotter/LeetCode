class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map<string, vector<string>> m;
        vector<vector<string>> ans;
        
        for(auto x : strs){
            
            string temp = x;
            sort(x.begin(), x.end());
            m[x].push_back(temp);
            
        }
        
        for(auto x : m){
            
            ans.push_back(x.second);
            
        }
       
        return ans;
    }
};