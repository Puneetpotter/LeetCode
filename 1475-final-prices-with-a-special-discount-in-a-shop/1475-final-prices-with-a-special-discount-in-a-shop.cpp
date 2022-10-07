class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int>ans;
        for(int i=0;i<prices.size();i++){
            int mp=prices[i];
            for(int j=i+1;j<prices.size();j++){
                //mp=prices[i];
                if(prices[j]<=prices[i]){
                    mp=(prices[i]-prices[j]);
                    break;
                }
            }
            ans.push_back(mp);
        }
        return ans;
    }
};