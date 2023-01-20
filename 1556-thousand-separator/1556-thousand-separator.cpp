class Solution {
public:
    string thousandSeparator(int n) {
        
        int count = 0;
        string num = to_string(n);
        string ans = "";
        
        if(n >= 0 && n < 1000)
            return num;
        
        for(int i = num.size() - 1; i >= 0; i--){
            
            ans.push_back(num[i]);
            
            count++;
            
            if(count == 3){
                
                ans.push_back('.');
                count = 0;
            }
        }
        
        reverse(ans.begin(), ans.end());
        
        if(ans[0] == '.')
            ans.erase(0,1);
        
        return ans;
        
    }
};