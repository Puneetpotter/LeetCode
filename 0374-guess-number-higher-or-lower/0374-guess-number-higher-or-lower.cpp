/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        
        int beg = 1;
        int mid = beg - (beg - n)/2;
        
        while(beg <= n){
            
            if(guess(mid) == 0)
                return mid;
            
            else if(guess(mid) == -1)
                n = mid - 1;
            
            else
                beg = mid + 1;
            
            mid = beg - (beg - n)/2;
            
        }
       
        return 0;
    }
};