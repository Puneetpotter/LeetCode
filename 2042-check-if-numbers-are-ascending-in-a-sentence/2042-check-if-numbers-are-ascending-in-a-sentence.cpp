class Solution {
public:
    bool areNumbersAscending(string s) {
        
        stringstream ss(s);
        string word;
        int maxi = -1;
        
        while(ss >> word){
            
            if(isdigit(word[0])){
                
                if(stoi(word) > maxi)
                    maxi = stoi(word);
                
                else
                    return false;
                
            }
            
        }
        
        return true;
        
    }
};