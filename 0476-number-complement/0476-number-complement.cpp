class Solution {
public:
    int findComplement(int num) {
        if (num==0) return 1;
        string s = bitset<32>(num).to_string();
        long int i=0,ans=0;
        for(;i<32;i++)
            if(s[i]=='1') break;
        for(;i<32;i++)
            if(s[i]=='0')
                ans+=pow(2,31-i);
        return ans;
    }
};