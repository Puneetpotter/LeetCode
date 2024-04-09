class Solution {
public:
    bool repeatedSubstringPattern(string s) {
            string ss = s+s;
            string sub = ss.substr(1,ss.size()-2);
            return sub.find(s) != string::npos;
    }
};