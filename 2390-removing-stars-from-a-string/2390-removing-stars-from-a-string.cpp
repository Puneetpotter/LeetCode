class Solution {
public:
    string removeStars(string s) {
        
        string ans = "";
        ans.push_back(s[0]);
       // stack <char> st;
        
        int i = 1;
        
        while(i < s.size()){
            
            if(s[i] == '*')
                ans.pop_back();
            
            else
                ans.push_back(s[i]);
            
            i++;
               
        }
       
        return ans;
    }
};