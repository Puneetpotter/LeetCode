class Solution {
public:
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        if (n==1) {
            return informTime[0];
        }

        vector<vector<int>> adj(n);
        for(int i=0;i<manager.size();i++) {
            if(i!=headID) {
                adj[manager[i]].push_back(i);
            }
        }

        return BFS(adj, headID, informTime);
        
    }

    int BFS(vector<vector<int>>&adj, int src, vector<int>& informTime) {
        queue<pair<int,int>> q;
        q.push(make_pair(src,informTime[src]));
        int ans =0;
        while(!q.empty()) {
            int len = q.size();
            for(int i=0;i<len;i++) {
                auto temp = q.front();
                q.pop();
                for (auto x : adj[temp.first]) {
                    int dist = temp.second + informTime[x];
                    q.push(make_pair(x, dist));
                    ans = max(ans, dist);
                }
            }
        }

        return ans;
    }
};