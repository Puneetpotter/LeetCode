#define vi vector<int>
#define vvi vector<vector<int>>
class Solution {
public:
    
    void solve(int i,vvi & req,vi & map,int & ans,int cur){
        if(i >= req.size()){
            bool flag = true;
            for(auto & it : map)
                flag = flag && bool(it==0);
            if(flag)
                ans = max(ans,cur);
            return ;
        }
        solve(i+1,req,map,ans,cur);
        map[req[i][0]]--;
        map[req[i][1]]++;
        solve(i+1,req,map,ans,cur+1);
        map[req[i][0]]++;
        map[req[i][1]]--;
    }
    
    int maximumRequests(int n, vector<vector<int>>& requests) {
        int ans = 0;
        vi map(n,0);
        solve(0,requests,map,ans,0);
        return ans;
    }
};