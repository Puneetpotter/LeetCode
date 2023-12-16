class Solution {
public:
    int fillCups(vector<int>& amount) {
        priority_queue<int> pq;
        pq.push(amount[0]);
        pq.push(amount[1]);
        pq.push(amount[2]);
        int ans=0;
        while(pq.top()>0){
            int a=pq.top();
            pq.pop();
            int b=pq.top();
            pq.pop();
            pq.push(--a);
            pq.push(--b);
            ans++;
        }
        return ans;
    }
};