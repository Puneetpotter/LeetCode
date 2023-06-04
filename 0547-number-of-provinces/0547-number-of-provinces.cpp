class Solution {
public:
    void color(vector<vector<int>> & cn, vector<int> & visited, int cur){
        if(visited[cur])
            return;
        visited[cur] = 1;     

        for(int x : cn[cur])
            color(cn,visited, x);

    }
    int findCircleNum(vector<vector<int>>& isConnected) {
       int n = isConnected.size();
       vector<vector<int>> cn(n); 

       for(int i = 0 ; i < n;i++){
           for(int j = 0 ; j < n;j++){
               if(isConnected[i][j]){
                   cn[i].push_back(j);
               }
           }
       }  

       int ans = 0; 
       vector<int> visited(n,0); 
       for(int i = 0 ; i < n;i++){
           if(!visited[i]){
               color(cn,visited,i);
               ans++;
           }
       }   

       return ans;
    }
};