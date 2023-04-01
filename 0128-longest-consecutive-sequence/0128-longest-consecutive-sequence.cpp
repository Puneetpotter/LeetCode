class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        set <int> s (nums.begin(), nums.end());
        
        int longest = 0;
        
        for(auto i : s){
            
            if(s.find(i - 1) == s.end()){
                
                int length = 0;
                
                while(s.find(i + length) != s.end())
                    length++;
                
                longest = max(length, longest);
                
            }
            
        }
        
        return longest;
    }
};