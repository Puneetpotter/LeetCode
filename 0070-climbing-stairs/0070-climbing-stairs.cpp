class Solution {
public:
    int climbStairs(int n) {
        
        if(n == 1)
            return 1;
        
        if(n == 2)
            return 2;
        
        if(n == 3)
            return 3;
        
        int i = 4;
        int prev = 3;
        int preprev = 2;
        int steps = 0;
        
        while(i <= n){
            
            steps = prev + preprev;
            preprev = prev;
            prev = steps;
            
            i++;
            
        }
        
        return steps;
        
    }
};