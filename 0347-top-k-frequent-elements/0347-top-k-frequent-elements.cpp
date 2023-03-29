class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map <int, int> m;
        multimap <int, int, greater<int>> mm;
        
        vector<int> ans;
        
        for(int i = 0; i < nums.size(); i++)
            m[nums[i]]++;
        
        for(auto &i: m)
            mm.insert({i.second, i.first});
        
        auto j= mm.begin();
        
        for(int i = 0; i < k; i++,j++)
            ans.push_back(j -> second);
        
        return ans;
    }
};