class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> ans;
        int i=1;
        while(i<=n){
            if(i%15==0)
                ans.push_back("FizzBuzz");
            else if(i%5==0)
                ans.push_back("Buzz");
            else if(i%3==0)
                ans.push_back("Fizz");
            else
                ans.push_back(to_string(i));
            i++;
        }
        return ans;
    }
};