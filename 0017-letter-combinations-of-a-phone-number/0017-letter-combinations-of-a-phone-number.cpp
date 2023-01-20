class Solution {
    
private:
    void solve(string digits, map <char, string> m, int index, vector <string> &ans, string output){
        
        if(index >= digits.size()){
            ans.push_back(output);
            return;
        }
        
        string value = m[digits[index]];
        
        for(int i = 0; i < value.size(); i++){
            
            output.push_back(value[i]);
            solve(digits, m, index + 1, ans, output);
            output.pop_back();
            
        }
        
        
    }
    
    
public:
    vector<string> letterCombinations(string digits) {
        
        map <char, string> m;
        vector <string> ans;
        
        int index = 0;
        string output = "";
        
        if(digits.length() == 0)
            return ans;
        
        m['2'] = "abc";
        m['3'] = "def";
        m['4'] = "ghi";
        m['5'] = "jkl";
        m['6'] = "mno";
        m['7'] = "pqrs";
        m['8'] = "tuv";
        m['9'] = "wxyz";
        
        solve(digits, m, index, ans, output);
        
        return ans;
        
    }
};