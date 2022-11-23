class Solution {
public:
    bool isPerfectSquare(int num) {
        long long int s=1;
        long long int e=num;
        long long int mid=1 + (num-1)/2;
        while(s<=e){
            if(mid*mid==num)
                return true;
            else if(mid*mid<num)
                s=mid+1;
            else
                e=mid-1;
            mid=s+(e-s)/2;
        }
        return false;
    }
};