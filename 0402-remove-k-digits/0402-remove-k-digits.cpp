class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> st;
        string ans;

        for(auto it:num){
            if(k > 0){
                while(!st.empty() && st.top() > it){
                st.pop();
                k--;
                if(k == 0) break;
            }
            }
            
            st.push(it);
        }
        if(k > 0){
            while(!st.empty() && k){
            st.pop();
            k--;
        }
        }
        

        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }

        while(ans.size() > 0 && ans.back()== '0'){
            ans.pop_back();
        }

        reverse(ans.begin(),ans.end());

        if(ans.size() == 0){
            ans.push_back('0');
        }
        return ans;



        // return ans;
    }
};