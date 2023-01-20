class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        
        int total = 0;
        int colcommon = 0;
        int rowcommon = 0;
        
        for(int i = 0; i < grid.size(); i++){
            
            for(int j = 0; j < grid[0].size(); j++){
                
                if(grid[i][j] == 1)
                    total++;
                
            }
            
        }
        
        if(total == 1)
            return 4;
        
        for(int i = 0; i < grid.size(); i++){
            
            for(int j = 0; j < grid[0].size() - 1; j++){
                
                if(grid[i][j] == 0)
                    continue;
                
                if(grid[i][j] == grid[i][j + 1])
                    rowcommon += 2;
                
            }
            
        }
        
        for(int j = 0; j < grid[0].size(); j++){
            
            for(int i = 0; i < grid.size() - 1; i++){
                
                if(grid[i][j] == 0)
                    continue;
                
                if(grid[i][j] == grid[i + 1][j])
                    colcommon += 2;
                
            }
            
        }
        
        cout << total << endl << rowcommon << endl << colcommon << endl;
        
        return (4*total) - rowcommon - colcommon;
        
    }
};