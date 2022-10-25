class Solution {
public:
    bool areOccurrencesEqual(string s) {
       map<char,int>m;
        for(int i=0;i<s.size();i++)
            m[s[i]]=0;
        for(int i=0;i<s.size();i++)
            m[s[i]]++;
        for(int i=0;i<s.size()-1;i++){
            if(m[s[i]]!=m[s[i+1]])
                return false;
        }
        return true;
    }
};