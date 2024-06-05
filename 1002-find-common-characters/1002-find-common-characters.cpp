class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        map<char, int> commonCount;
        for(int i=0; i<words[0].size(); i++){
            commonCount[words[0][i]]++;
        }
        
        for(int i=1; i<words.size(); i++){
            map<char, int> charCount;
            
            for(int j=0; j<words[i].size(); j++){
                charCount[words[i][j]]++;
            }
            
            for(char j='a'; j<='z'; j++){
                commonCount[j]=min(commonCount[j], charCount[j]);
            }
            
        }
        vector<string> ans;
        for(char i='a'; i<='z'; i++){
            if(commonCount[i]>0){
                while(commonCount[i]--){
                    string c="";
                    c+=i;
                    ans.push_back(c);
                }
            }
        }
        return ans;
    }
};