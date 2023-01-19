class Solution {
    
private:
    int digitsum(int num){
        
        int sum = 0;
        
        while(num > 0){
            
            sum += num % 10;
            num /= 10;
            
        }
        
        return sum;
        
    }
    
    
public:
    int countBalls(int lowLimit, int highLimit) {
        
        map <int, int> m;
        int maxi = 0;
        
        for(int i = lowLimit; i <= highLimit; i++){
            
            if(i < 10)
                m[i]++;
            
            else
                m[digitsum(i)]++;
            
        }
        
        for(auto i:m){
            
            maxi = max(maxi, i . second);
            
        }
        
        return maxi;
        
    }
};