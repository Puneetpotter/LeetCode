class Solution {

// private:
//     bool docomp(const pair<int,int> &a,
//               const pair<int,int> &b)
// {
//     return (a.second < b.second);
// }
    
    
public:
    vector<int> sortByBits(vector<int>& arr) {
        
        vector<int> ans;
        vector<pair <int, int>> p;
        
        for(auto i : arr)
            p.push_back(make_pair(__builtin_popcount(i), i));
        
        
        
        sort(p.begin(), p.end());
        
        for(auto i : p)
            ans.push_back(i.second);
        
        return ans;
        
    }
};