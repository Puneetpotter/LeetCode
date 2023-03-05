class Solution {
public:
    string reverseStr(string s, int k) {
        
        int n = s.size();
        
        for(int i = 0; i < n; i += 2*k){
            
            int start = i;
            int end = i + k - 1;
            
            if(end >= n)
                end = n - 1;
            
            while(start <= end){
                swap(s[start], s[end]);
                start++;
                end--;
            }
            
        }
        
        return s;
    }
};