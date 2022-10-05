class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        string ans="";
        for(int i=0;i<words.size();i++){
            string check=words[i];
            reverse(words[i].begin(),words[i].end());
            if(check==words[i]){
                return (words[i]);
                break;
            }
        }
        return ans;
    }
};