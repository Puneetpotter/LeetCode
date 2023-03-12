class Solution {
public:
    int arrangeCoins(int n) {
        
        int s = 1;
        int e = n;
        long int mid = s + (e - s) / 2;
        //long int ans;
        
        while(s <= e){
            
            if((mid * (mid + 1))/2 == n)
                return mid;
            
            if((mid * (mid + 1))/2 < n){
                
                s = mid + 1;
                
            }
            
            else
                e = mid - 1;
            
            mid = s + (e - s) / 2;
        }
        
        return e;
    }
};