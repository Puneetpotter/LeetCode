class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        
        int start = 0;
        int end = letters.size() - 1;
        int mid = start + (end - start) / 2;
        
        if(letters[end] <= target)
            return letters[start];
        
        while(start <= end){
            
            if(letters[mid] == target && letters[mid + 1] != letters[mid])
                return letters[mid + 1];
            
            else if(letters[mid] <= target && letters[mid + 1] > target)
                return letters[mid + 1];
            
            // else if(letters[mid] > target && letters[mid - 1] < target)
            //     return letters[mid + 1];
            
            else if(letters[mid] <= target)
                start = mid + 1;
            
            else
                end = mid - 1;
            
            mid = start + (end - start) / 2;    
            
        }
        
        return letters[0];
    }
};