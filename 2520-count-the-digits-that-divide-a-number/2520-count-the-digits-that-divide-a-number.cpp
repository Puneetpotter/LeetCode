class Solution {
public:
    int countDigits(int num) {
        int numcp = num;
        int count = 0;
        while(numcp > 0){
            if(num % (numcp % 10) == 0)
                count++;
            numcp /= 10;
        }
        return count;
    }
};