class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> ans;
        
        for(int i=1; i<=9; i++){
            int firstDigits=i;
            int nextDigit=i+1;
            
            while(firstDigits<=high and nextDigit<=9){
                firstDigits=firstDigits*10+nextDigit;
                
                if(firstDigits>=low and firstDigits<=high)
                    ans.push_back(firstDigits);
                
                nextDigit++;
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};