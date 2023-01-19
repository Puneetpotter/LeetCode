class Solution {
public:
    int maxDistance(vector<int>& colors) {
        
        int ans = 0;
        int n = colors.size();
        
        if(n == 2)
            return 1;
        
        if(colors[0] != colors[n - 1])
            return n - 1;
        
        int far = 0;
        
        for(int i = 0; i < n; i++){
            
            for(int j = i + 1; j < n; j++){
                
                if(colors[i] != colors[j])
                    far = max(far, (j - i));
                
            }
            
        }
        
        return far;
        
    }
};