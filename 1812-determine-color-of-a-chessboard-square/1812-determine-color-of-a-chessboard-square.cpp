class Solution {
public:
    bool squareIsWhite(string coordinates) {
        
        int sum = coordinates[0] + coordinates[1];
        
        if(sum % 2 != 0)
            return true;
        
        return false;
        
    }
};