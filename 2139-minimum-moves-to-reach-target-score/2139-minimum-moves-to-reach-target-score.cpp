class Solution {
public:
    int minMoves(int target, int maxDoubles) {
        
    int count=0;
        
    while(maxDoubles > 0 && target > 1){
        
        count += (target % 2 + 1);
        target /= 2;
        maxDoubles --;
        
    }
        
    count += (target - 1);
        
    return count;
    }
};