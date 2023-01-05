class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        int n = digits.size();
        vector <int> ans;
        
        if(digits[n-1] < 9){
            digits[n-1] += 1;
            return digits;
        }
        
        else
            digits[n-1] = 0;
        
        int carry = 1;

        for(int i = n-2; i>=0; i--){
            
            int sum = digits[i] + carry;
            digits[i] = sum % 10;
            carry = sum / 10;
                
        }
        
        if(carry > 0)
            digits.insert(digits.begin(),carry);
        
        return digits;
    }
};