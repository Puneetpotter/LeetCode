class Solution {
public:
    void getPaths(vector<vector<int>>& graph, vector<int> path, vector<vector<int>> &paths, int start, int end){
        if(start>end)
            return;
        
        path.push_back(start);
        
        if(start==end){
            paths.push_back(path);
            return;
        }
        
        for(auto i:graph[start])
            getPaths(graph, path, paths, i, end);
        
        
    }
    
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<int> path;
        vector<vector<int>> paths;
        int n = graph.size();
        
        getPaths(graph, path, paths, 0, n-1);
        return paths;
    }
};