class Solution {
public:
    bool isAnagram(string s, string t) {
        
        unordered_map <char, int>m;
        unordered_map <char, int>m1;
        
        if(s.size() != t.size())
            return false;
        
        for(int i = 0; i < s.size(); i++)
            m[s[i]]++;
        
        for(int i = 0; i < t.size(); i++)
            m1[t[i]]++;
        
        for(int i = 0; i < t.size(); i++){
            
            if(m[t[i]] != m1[t[i]])
                return false;
            
        }
        
        return true;
    }
};