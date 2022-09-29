class Solution {
public:
    bool isPalindrome(int x) {
       long int sum=0,rem=0;
        int temp=x;
        while(x>0){
            rem=x%10;
            sum=(sum*10)+rem;
            x/=10;
        }
        if(temp==sum)
            return true;
        else
            return false;
    }
};