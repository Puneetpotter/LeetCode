class Solution {
    
private:
    int next(int n){
        int square = 0;
        while(n>0){
            int digit = n%10;
            square += digit*digit;
            n /= 10;
        }
        return square;
    }
    
public:
    bool isHappy(int n) {
        map<int,int>m;
        while(n!=1 && m[n]<=1){
            m[n]++;
            n = next(n);
        }
        return n == 1;
    }
};