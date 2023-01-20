class Solution {
public:
    string reorderSpaces(string text) {
        
        int words = 0;
        int spaces  = 0;
        
        string ans = "";
        string str = "";
        
        if(text[0] == ' ')
            spaces++;
        
        if(text[text.size() - 1] != ' ')
            words++;
        
        for(int i = 1; i < text.size(); i++){
            
            if(text[i] == ' ')
                spaces++;
            
            if(text[i] == ' ' && text[i-1] != ' ')
                words++;
            
        }
        
        
        stringstream s(text);
        string word;
        
        string addspaces = "";
       // int balance = 1;
        
        if(words == 1)
            words++;
        
        for(int i = 0; i < spaces/(words - 1); i++){
            
            addspaces.push_back(' ');
            
        }
        
        while(s >> word){
            
            ans.append(word);
            ans.append(addspaces);
           
        }
        
        if(ans.size() < text.size()){
            
            int i = text.size();
            
            while(i >= ans.size()){
                
                ans.push_back(' ');
                i--;
                
            }
            
        }
        
        for(int i = 0; i < text.size(); i++){
            
            str.push_back(ans[i]);
            
        }
        
        return str;
    }
};