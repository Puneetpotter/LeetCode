class Solution {
public:
    bool isValid(string s) {
        
        vector <char> a;
        
        a.push_back(s[0]);
        
        for (int i= 1;i < s.size(); i++){
            
           // if(s[i] == '{' || s[i] == '(' || s[i] == '[')
            
            if(a.empty()){
                a.push_back(s[i]);
                continue;
            }
                
            
            if(a.back() == '(' && s[i] == ')')
                a.pop_back();
            
            else if(a.back() == '{' && s[i] == '}')
                a.pop_back();
            
            else if(a.back() == '[' && s[i] == ']')
                a.pop_back();
            
            else
                a.push_back(s[i]);
            
        }
        
        return a.empty();
    }
};