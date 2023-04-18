class Solution {
private:
    vector<int>nse(vector<int>arr, int n){
        
        stack<int>s;
        
        s.push(-1);
        
        vector<int>ans(n);
        
        for(int i = n - 1; i >= 0; i--){
            
            while(s.top() != -1 and arr[s.top()] >= arr[i])
                s.pop();
            
            ans[i] = s.top();
            s.push(i);
            
        }
        
        return ans;
    }
    
    vector<int>pse(vector<int>arr, int n){
        
        stack<int>s;
        
        s.push(-1);
        
        vector<int>ans(n);
        
        for(int i = 0; i < n; i++){
            
            while(s.top() != -1 and arr[s.top()] >= arr[i])
                s.pop();
            
            ans[i] = s.top();
            s.push(i);
            
        }
        
        return ans;
    }
    
    
public:
    int largestRectangleArea(vector<int>& heights) {
        
        int n = heights.size();
        
        vector<int>prev(n);
        vector<int>next(n);
        
        next = nse(heights, n);
        prev = pse(heights, n);
        
        int area = INT_MIN;
        
        for(int i = 0; i < n; i++){
            
            if(next[i] == -1)
                next[i] = n;
            
            int l = heights[i];
            int b = next[i] - prev[i] - 1;
            
            int narea = l * b;
            area = max(area, narea);
            
        }
        
        return area;
    }
};