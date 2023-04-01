class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        int lo = 0;
        int hi = numbers.size() - 1;
      //  int mid = lo + (hi - lo) / 2;
        
        if(numbers.size() == 2)
            return {1, 2};
        
        if(numbers[0] + numbers[1] == target)
            return {1, 2};
        
        if(numbers[0] + numbers[numbers.size() - 1] == target)
            return {1, hi + 1};
        
        while(lo < hi){
            
            if(numbers[lo] + numbers[hi] == target)
                return {lo + 1, hi + 1};
            
            else if(numbers[lo] + numbers[hi] > target)
                hi--;
            
            else
                lo++;
            
        }
        
        return {0, 0};
    }
};