class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int n = grid.size(),ans=0;
        map<vector<int>,vector<int>>mp;
        
		//first traverse rows and push index of each row in the map
        for(int i=0;i<n;i++){
            vector<int>v;
            for(int j=0;j<n;j++){
                v.push_back(grid[i][j]);
            }
            mp[v].push_back(i);
        }
        
		//then just compare columns by traversing in column fashion with the map
        for(int i=0;i<n;i++){
            vector<int>v;
            for(int j=0;j<n;j++){
                v.push_back(grid[j][i]);
            }
            auto it = mp.find(v);
            if(it != mp.end()){
                ans += (it->second).size();
            }
        } 
        
        return ans;
    }
};