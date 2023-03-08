class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        
        int mandis = INT_MAX;
        int index = 0;
        
        for(int i = 0; i < points.size(); i++){
            
            if(x == points[i][0] || y == points[i][1]){
                
                if(mandis > (abs(x - points[i][0]) + abs(y - points[i][1])))
                {mandis = (abs(x - points[i][0]) + abs(y - points[i][1]));
               // cout << abs(x - points[i][0]) << endl << abs(y - points[i][1]) << endl;
                index = i;}
            }
            
            if(i == points.size() - 1 && mandis == INT_MAX)
                return -1;
            
        }
        
        return index;
    }
};