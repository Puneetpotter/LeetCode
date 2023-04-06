class Solution {    
public:
    vector<int> countBits(int n) {
        
        vector <int> ans;
        
        for(int i = 0; i <= n; i++){
            
            string s = bitset<32> (i).to_string();
            int count = 0;
            
            for(int j = 0; j < 32; j++){
                
                if(s[j] == '1')
                    count++;
                
            }
            
            ans.push_back(count);
        }
        
        return ans;
    }
};