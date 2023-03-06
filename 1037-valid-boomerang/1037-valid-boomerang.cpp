class Solution {
public:
    bool isBoomerang(vector<vector<int>>& points) {
        
        int x0 = points[0][0];
        int y0 = points[0][1];
        int x1 = points[1][0];
        int y1 = points[1][1];
        int x2 = points[2][0];
        int y2 = points[2][1];
        
       // int ans = ((x0 * (y1 - y2)) + (x1 * (y2 - y0)) + (x2 * (y0 - y1)))/2;
        
        int ans = (x0 * y1) - (x0 * y2) + (x1 * y2) - (x1 * y0) + (x2 * y0) - (x2 * y1);
      //  ans /= 2;
        
        
        
        cout << ans << endl;
        
        if(ans)
            return true;
        
        return false;
    }
};