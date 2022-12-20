class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<0)
            return false;
        string s = bitset<32>(n).to_string();
        int count =0;
        for(int i=0;i<32;i++){
            if(s[i]=='1')
                count++;
            if(count>1)
                return false;
        }
        if(count == 0) return false;
        return true;
    }
};