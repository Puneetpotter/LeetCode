class Solution {
public:
    string makeGood(string s) {
        
        stack<char> st;
        string ans = "";
        st.push(s[0]);
        
        for(int i = 1; i < s.size(); i++){
            
            if(st.empty()){
                
                st.push(s[i]);
                continue;
                
            }
            
            if(abs(st.top() - s[i]) == 32)
                st.pop();
            
            else
                st.push(s[i]);
            
        }
        
        while(!st.empty()){
            
            ans.push_back(st.top());
            st.pop();
            
        }
        
        reverse(ans.begin(), ans.end());
        
        return ans;
    }
};