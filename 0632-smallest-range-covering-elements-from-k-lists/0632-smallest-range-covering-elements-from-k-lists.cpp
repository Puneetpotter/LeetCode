class node{
    public:
        int val;
        int row;
        int col;
        int length;
    
        node(int data, int i, int j, int s){
            val=data;
            row=i;
            col=j;
            length=s;
        }
};

class compare{
    public:
        bool operator()(node* a, node* b){
            return a->val > b->val;
        }
};

class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {
        int n=nums.size();
        int mini=INT_MAX;
        int maxi=INT_MIN;
        priority_queue<node*, vector<node*>, compare> pq;
        
        for(int i=0; i<n; i++){
            int element=nums[i][0];
            pq.push(new node(element, i, 0, nums[i].size()));
            maxi=max(maxi, element);
            mini=min(mini, element);
        }
        
        int start=mini;
        int end=maxi;
        
        while(pq.size()>0){
            node* temp=pq.top();
            pq.pop();
            mini=temp->val;
            
            if(maxi-mini<end-start){
                start=mini;
                end=maxi;
            }
            
            if(temp->col+1<temp->length){
                maxi=max(maxi, nums[temp->row][temp->col+1]);
                pq.push(new node(nums[temp->row][temp->col+1], temp->row, temp->col+1, temp->length));
            }
            
            else{
                break;
            }
        }
        return {start, end};
    }
};