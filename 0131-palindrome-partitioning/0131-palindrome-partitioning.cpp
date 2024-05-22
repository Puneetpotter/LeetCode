class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> tmp;
        dfs(0, tmp, s, ans);
        return ans;
    }

    bool isPalindrome(const string& str) {
        for(int i = 0; i < (str.size() / 2); i++) {
            if (str[i] != str[str.size() - 1 - i]) return false;
        }
        return true;
    }

    void dfs(int i, vector<string>& cur, const string& s, vector<vector<string>>& ans) {
        if (i == s.size()) {
            ans.push_back(cur);
        }
        for(int start = i; i < s.size(); i++) {
            cur.push_back(s.substr(start, i - start + 1));
            if (isPalindrome(cur.back()))
                dfs(i + 1, cur, s, ans);
            cur.pop_back();
        }
    }
};