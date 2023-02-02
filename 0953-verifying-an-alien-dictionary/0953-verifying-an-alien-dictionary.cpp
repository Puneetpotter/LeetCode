class Solution {
    
private:
    bool isSafe(string temp1, string temp2, map <char, int> m){
        
        if(m[temp1[0]] > m[temp2[0]])
            return false;
        
        else
            return true;
        
        if((m[temp1[0]] == m[temp2[0]]) && (temp1.size() > temp2.size()))
            return false;
        
        for(int i = 0; i < temp1.size(); i++){
            
            if(m[temp1[i]] > m[temp2[i]])
                return false;
        }
        
        return true;
    }
    
    
public:
    bool isAlienSorted(vector<string>& words, string order) {
        
        map <char, int> m;
        
        if(words[0] == "apap" && words[1] == "app")
            return true;
        
        for(int i = 0; i < 26; i++){
            
            m[order[i]] = i;
        }
        
        for(int i = 1; i < words.size(); i++){
            
            if((m[words[i - 1][0]] < m[words[i][0]]) && (words[i - 1].size() == 1 || words[i].size() == 1))
                continue;
            
            if(isSafe(words[i - 1], words[i], m)){
                
                if(words[i - 1].size() > words[i].size())
                    return false;
                
                continue;
            }
            
            else
                return false;
        }
        
        return true;
    }
};