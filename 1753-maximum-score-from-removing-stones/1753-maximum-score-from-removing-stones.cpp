class Solution {
public:
    int maximumScore(int a, int b, int c) {
        priority_queue<int>pq;
        int ans=0;
        pq.push(a);
        pq.push(b);
        pq.push(c);
        while(pq.size()>=2){
            ans++;
            int t1=pq.top();
            pq.pop();
            int t2=pq.top();
            pq.pop();
            t1--;
            t2--;
            if(pq.top()<=0)
                pq.pop();
            if(t1>0)
                pq.push(t1);
            if(t2>0)
                pq.push(t2);
        }
        return ans;
    }
};