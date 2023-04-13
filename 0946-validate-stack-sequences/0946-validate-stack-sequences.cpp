class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        
        stack <int> s;
        int i = 0, j = 0;
        
        while(i < pushed.size() && j < popped.size()){
            
            if(s.empty()){
                
                s.push(pushed[i]);
                i++;
                
            }
            
            else if(s.top() == popped[j]){
                
                s.pop();
                j++;
                
            }
            
            else{
                
                s.push(pushed[i]);
                i++;
                
            }
        }
        
        while(j < popped.size()){
            
            if(s.top() == popped[j]){
                
                s.pop();
                j++;
                
            }
            
            else
                return false;
        }
        
        return s.empty();
    }
};