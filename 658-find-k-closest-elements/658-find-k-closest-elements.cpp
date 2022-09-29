class Solution {
public:
    vector<int> findClosestElements(vector<int>& a, int k, int x) {
        int lo=0, hi=a.size()-k, mid;
        while(lo<hi) {
            mid=(lo+hi)>>1;
            if(x-a[mid] > a[mid+k]-x) lo=mid+1;
            else hi=mid;
        }
        return vector<int> (a.begin()+lo, a.begin()+lo+k);
    }
};