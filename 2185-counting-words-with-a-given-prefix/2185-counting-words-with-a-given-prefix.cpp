class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int n=0;
        for(int i=0;i<words.size();i++){
            string str=words[i].substr(0,pref.size());
            if(str==pref)
                n++;
        }
        return n;
    }
};