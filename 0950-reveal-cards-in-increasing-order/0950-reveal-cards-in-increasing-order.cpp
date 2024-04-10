class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        int n=deck.size();
        queue<int> q;
        vector<int> ans(n);
        
        sort(deck.begin(), deck.end());
        
        for(int i=0; i<n; i++)
            q.push(i);
        
        for(int i=0; i<n; i++){
            ans[q.front()]=deck[i];
            q.pop();
            
            if(!q.empty()){
                q.push(q.front());
                q.pop();
            }
        }
        
        return ans;
    }
};