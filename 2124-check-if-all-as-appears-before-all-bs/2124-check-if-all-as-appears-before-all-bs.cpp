class Solution {
public:
    bool checkString(string s) {
        
        int i = 0;
        int n = s.size();
        
        while(i < n){
            
            if(s[i] == 'b')
                break;
            
            i++;
            
        }
        
        while(i < n){
            
            if(s[i] == 'a')
                return false;
            
            i++;
            
        }
        
        return true;
        
    }
};