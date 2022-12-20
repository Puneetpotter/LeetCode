class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 32;
        string s = bitset<32>(n).to_string();
        for(int i=0;i<32;i++)
            if(s[i]=='0') count --;
        return count;
    }
};