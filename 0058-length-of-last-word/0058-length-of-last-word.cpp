class Solution {
public:
    int lengthOfLastWord(string s) {
        
        int count = 0;
        
        for(int i=0; i < s.size(); i++){
            
            if(s[i] != ' ')
                count++;
            
            if(i != 0 && s[i] != ' ' && s[i-1] == ' ')
                count = 1;  
            
        }
        
        return count;
    }
};