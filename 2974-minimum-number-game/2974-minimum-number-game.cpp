class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        priority_queue<int, vector<int>, greater<int>> pq;
        vector<int> ans;
        
        for(auto i:nums){
            pq.push(i);
        }
        
        while(!pq.empty()){
            int alice=pq.top();
            pq.pop();
            int bob=pq.top();
            pq.pop();
            ans.push_back(bob);
            ans.push_back(alice);
        }
        
        return ans;
    }
};