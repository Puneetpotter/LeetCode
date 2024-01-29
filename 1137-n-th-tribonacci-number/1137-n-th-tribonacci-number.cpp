class Solution {
public:
    int tribonacci(int n) {
        int prev_0 = 0;
        int prev_1 = 1;
        int prev_2 = 1;
        int curr=0;
        
        if(n==1 or n==2)
            return 1;
        
        for(int i=3; i<=n; i++){
            curr=prev_0+prev_1+prev_2;
            prev_0=prev_1;
            prev_1=prev_2;
            prev_2=curr;
        }
        
        return curr;
    }
};