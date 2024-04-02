class Solution {
public:
    bool wordPattern(string pattern, string s) {
        stringstream ss(s);
        unordered_map<char, string> m;
        string word;
        int i=0;
        unordered_map<char, int> cCount;
        unordered_map<string, int> sCount;
        
        while(ss >> word){
            if(i+1 > pattern.size())
                return false;
            
            if(m[pattern[i]].size() != 0)
                if(m[pattern[i]] != word)
                    return false;
            
            if(cCount[pattern[i]] != sCount[word])
                return false;
            
            m[pattern[i]]=word;
            cCount[pattern[i]]++;
            sCount[word]++;
            i++;
        }
        
        if(i != pattern.size())
                return false;
        
        return true;
    }
};