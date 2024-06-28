class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        vector<long long> getRoads(n, 0);
        int size=roads.size();
        
        for(int i=0; i<size; i++){
            getRoads[roads[i][0]]++;
            getRoads[roads[i][1]]++;
        }
        
        sort(getRoads.begin(), getRoads.end());
        
        long long importance=0;
        
        for(int i=0; i<n; i++){
            importance+=getRoads[i]*(i+1);
        }
        
        return importance;
    }
};