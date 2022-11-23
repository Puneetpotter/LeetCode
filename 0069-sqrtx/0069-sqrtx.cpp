class Solution {
public:
    int mySqrt(int x) {
       long long int s=0,e=x;
       long long int mid=s+(e-s)/2;
       long long int ans=-1;
        while(s<=e){
        if(mid*mid==x)
            return mid;
        else if(mid*mid<x){
            ans=mid;
            s=mid+1;
        }
        else
            e=mid-1;
        mid=s+(e-s)/2;
        }
        return ans;
    }
};