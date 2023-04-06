class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        //unordered_map <char, int> m;
        
        int ans = 0;
        
       for(int i = 0; i < s.size(); i++){
           
           unordered_map <char, int> m;
           
           int j = i;
           int count = 0;
           
           while(m[s[j]] == 0 && j < s.size()){
               
               count++;
               m[s[j]]++;
               j++;
               
           }
           
           ans = max(ans, count);
       } 
       
        return ans;
    }
};