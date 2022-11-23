// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long long int s=1;
        long long int e=n;
        long long int mid=s-(s-e)/2;
        long long int ans=-1;
        while(s<=e){
            if(isBadVersion(mid)==true){
                e=mid-1;
                ans=mid;
            }else
                s=mid+1;
            mid=s-(s-e)/2;
        }
        return ans;
    }
};