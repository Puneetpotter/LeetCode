class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        
        priority_queue<int, vector<int>, greater<int>>pq;
        int n=nums.size();
        int ans=0;
        int subFactor=0;
        
        for(int i=0; i<n; i++){
            pq.push(nums[i]);
        }
        
        while(pq.size()!=0){
            int temp=pq.top();
            temp=temp-subFactor;
            if(temp!=0)
                ans++;
            subFactor+=temp;
            pq.pop();
        }
        return ans;
    }
};