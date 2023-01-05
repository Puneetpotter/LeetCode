class Solution {
public:
    double myPow(double x, int n) {
        
        if(x==1 || n==0) return 1;
        if(x == 0) return 0;
        
        double result=1;
        
        bool temp = false;
        
        if(n<0)
            temp = true;
        
        n = abs(n);
        
            while(n){
                if (n%2!=0)
                    result *= x;
                x *= x;
                n/=2;
            }
        
        if(temp)
            return 1/result;
        
        return result;
    }
};