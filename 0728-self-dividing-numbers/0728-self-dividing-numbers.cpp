class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>ans;
       // int i=left;
        while(left<=right){
          //  int mul=1;
            int j=left;
            while(j!=0){
                int rem=j%10;
                if(rem==0||left%rem!=0)
                    break;
                j/=10;
            }
            if(j==0)
                ans.push_back(left);
            left++;
        }
        return ans;
    }
};