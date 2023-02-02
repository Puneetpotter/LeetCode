class Solution {
public:
    int alternateDigitSum(int n) {
        
        int sum = 0;
        
        if(n < 10)
            return n;
        
        else if(n < 100)
            return (n / 10) - (n % 10);
        
        string number = to_string(n);
        
        for(int i = 0; i < number.size(); i++){
            
            int digit = int(number[i]) - '0';
            
            if(i % 2)
                sum -= digit;
            
            else
                sum += digit;
        }
        
        return sum;  
    }
};