class Solution {
public:
    string kthLargestNumber(vector<string>& nums, int k) {
        
        priority_queue<pair<int, string>, vector<pair<int, string>>, greater<pair<int, string>>>q;
        int n=nums.size();
        
        for(int i=0; i<n; i++){
            q.push({nums[i].size(), nums[i]});
            if(i>=k)
                q.pop();
        }
        
        return q.top().second;
    }
};