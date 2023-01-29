class Solution {
    
private:
    int themax(vector <int> piles){
        
        return piles.back();
    }
    
    
public:
    bool stoneGame(vector<int>& piles) {
        
        int n = piles.size();
        int alice = 0;
        int bob = 0;
        
        sort(piles.begin(), piles.end());
        
        int i = 0;
        
        while(i < n){
            
          if(i % 2 == 0)
              alice += themax(piles);
            
            else
                bob += themax(piles);
            
            piles.pop_back();
            i ++;
        }
        
        return alice > bob;
    }
};