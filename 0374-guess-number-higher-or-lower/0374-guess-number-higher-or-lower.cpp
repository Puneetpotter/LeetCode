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
        long long int beg=1;
        long long end=n;
        long long mid=end-(end-beg)/2;
        while(beg<=end){
            if(guess(mid)==0)
                return mid;
            else if(guess(mid)==-1)
                end=mid-1;
            else
                beg=mid+1;
            mid=end-(end-beg)/2;
        }
        return 1;
    }
};