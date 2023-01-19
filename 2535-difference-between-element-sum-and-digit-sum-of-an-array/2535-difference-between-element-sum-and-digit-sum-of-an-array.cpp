class Solution {
    
private:
    int digits( int num ){
        
        int sum = 0;
        
        while(num > 0){
            
            sum += num % 10;
            num /= 10;
            
        }
        
        return sum;
    }
    
    
    
public:
    int differenceOfSum(vector<int>& nums) {
        
        int elementsum = 0;
        int digitsum = 0;
        
        for(int i = 0; i < nums.size(); i++){
            
            if(nums[i] >= 10)
                digitsum += digits(nums[i]);
            
            else
                digitsum += nums[i];
            
            elementsum += nums[i];
            
        }
        
        return elementsum - digitsum;
        
    }
};