class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        
        int n = grid.size();
        
        if(grid[0][0] == 1 || grid[n - 1][n - 1])
            return -1;
        
        queue<vector<int>> q;
        q.push({0, 0 , 1});
        
        vector<vector<int>> points = {{1, 0}, {1, 1}, {0, 1}, {-1, 1}, {-1, 0}, {-1, -1}, {0, -1}, {1, -1}};
        
        while(!q.empty()){
            
            auto temp = q.front();
            q.pop();
            
            int r = temp[0];
            int c = temp[1];
            int s = temp[2];
            
            if(r == n - 1 and c == n - 1)
                return s;
            
            for(int i = 0; i < 8; i++){
                
                int row = r + points[i][0];
                int col = c + points[i][1];
                
                if(row >= 0 and row < n and col >= 0 and col < n and grid[row][col] == 0){
                    
                    q.push({row, col, s + 1});
                    grid[row][col] = 1;
                    
                    
                }
                
            }
            
        }
        
        return -1;
    }
};