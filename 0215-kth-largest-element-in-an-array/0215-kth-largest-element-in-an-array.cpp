class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        
        priority_queue<int> q;
        
        for(int i=0; i<k; i++){
            q.push(-1 * nums[i]);  
        }
        
        int n=nums.size();
        
        for(int i=k; i<n; i++){
            if(-1*nums[i]<q.top()){
                q.pop();
                q.push(-1*nums[i]);
            }
        }
        
        int ans = -1*q.top();
        return ans;
    }
};