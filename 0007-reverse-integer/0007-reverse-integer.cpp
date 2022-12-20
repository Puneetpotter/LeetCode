class Solution {
public:
    int reverse(int x) {
        long int ans = 0;
        while(x!=0){
            long int digit = x%10;
            ans = ans*10 + digit;
            x/=10;
        }
        if(ans>=-2147483648&&ans<=2147483647)
            return ans;
        return 0;
    }
};