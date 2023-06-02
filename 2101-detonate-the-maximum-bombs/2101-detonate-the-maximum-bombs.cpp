class Solution {
public:
    void dfs(int i,vector<int> &vis,vector<int> adj[],int &cnt){
        for(auto it  :adj[i]){
            if(vis[it]== -1){
                cnt++;
                vis[it]=1;
                dfs(it,vis,adj,cnt);
            }
        }
    }
    int maximumDetonation(vector<vector<int>>& bombs) {
        int n = bombs.size();
        vector<int> adj[n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                long long int x = bombs[i][0] - bombs[j][0];
                long long int y = bombs[i][1] - bombs[j][1];
                long long int r1 = bombs[i][2];
                if((x*x)+(y*y)<=r1*r1 && i!=j){
                    adj[i].push_back(j);
                }
            }    
        }
        int mx = 1;
        for(int i=0;i<n;i++){
            vector<int> vis(n,-1); int cnt = 1;
            vis[i]=1;
            dfs(i,vis,adj,cnt);
            mx = max(cnt,mx);
        }
        return mx;
    }
};