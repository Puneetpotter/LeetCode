class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0) return 1;
        long int ans=0;
        string s = bitset<32>(n).to_string();
      //  cout<<s;
        int i=0;
        for(;i<=31;i++){
            if(s[i]=='1')
                break;
        }
        for(;i<=31;i++){
          //  cout<<ans<<endl;
            if(s[i]=='0')
             ans=ans+pow(2,31-i);   
        }
        return ans;
    }
};