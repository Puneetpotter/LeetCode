class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, int> m1;
        unordered_map<char, int> m2;
        unordered_map<char, char> m3;
        int n=s.size();
        
        for(int i=0; i<n; i++){
            m1[s[i]]++;
            m2[t[i]]++;
            
            if(m1[s[i]] != m2[t[i]] or ((m1[s[i]] > 1 and  m2[t[i]] > 1) and m3[s[i]] != t[i]))
                return false;
            m3[s[i]]=t[i];
        }
        
        return true;
    }
};