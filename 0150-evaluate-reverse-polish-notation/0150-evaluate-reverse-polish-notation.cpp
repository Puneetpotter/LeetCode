class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        
        stack <string> s;
        
        for(int i = 0; i < tokens.size(); i++){
            
            if(tokens[i] == "+"){
                
               // string temp = s.top();
                int b = stoi(s.top());
                s.pop();
                int a = stoi(s.top());
                s.pop();
                s.push(to_string(a + b));
                
            }
            
            else if(tokens[i] == "*"){
                
                int b = stoi(s.top());
                s.pop();
                int a = stoi(s.top());
                s.pop();
                s.push(to_string(a * b));
                
            }
            else if(tokens[i] == "-"){
                
                int b = stoi(s.top());
                s.pop();
                int a = stoi(s.top());
                s.pop();
                s.push(to_string(a - b));
                
            }
            else if(tokens[i] == "/"){
                
                int b = stoi(s.top());
                s.pop();
                int a = stoi(s.top());
                s.pop();
                s.push(to_string(a / b));
                
            }
            
            else
                s.push(tokens[i]);
            
        }
        
        return stoi(s.top());
    }
};