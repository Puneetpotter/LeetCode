class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        string s=bitset<32>(n).to_string();
     //   cout<<s;
        long int ans=0;
        for(int i=0;i<32;i++){
            if(s[i]=='1') 
                ans+=pow(2,i);
        }
        return ans;
    }
};