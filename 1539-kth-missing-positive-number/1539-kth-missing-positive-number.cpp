class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        
        int count = 0;
        int j = 0, i = 1;
        
        for(i = 1; i < arr[arr.size() - 1]; i++){
            
            if(i != arr[j])
                count++;
            
            else
                j++;
            
            if(count == k)
                return i;
            
        }
        
        if(count < k)
            return i + k - count;
        
        return 0;
    }
};