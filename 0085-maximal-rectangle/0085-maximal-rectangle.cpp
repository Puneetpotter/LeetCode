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
    
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        
        int n = matrix.size();
        int m = matrix[0].size();
        
        vector<vector<int>> matric(n);
        
        for(int i = 0; i < n; i++){
            
            for(int j = 0; j < m; j++){
                
                if(matrix[i][j] == '0')
                    matric[i].push_back(0);
                
                else
                    matric[i].push_back(1);
                
            }
            
        }
        
        int area = largestRectangleArea(matric[0]);
        
        for(int i = 1; i < n; i++){
            
            for(int j = 0; j < m; j++){
                
                if(matric[i][j] != 0)
                    matric[i][j] += matric[i - 1][j];
                
                else
                    matric[i][j] = 0;
                
            }
            
            area = max(area, largestRectangleArea(matric[i]));
        }
        
        return area;
    }
};