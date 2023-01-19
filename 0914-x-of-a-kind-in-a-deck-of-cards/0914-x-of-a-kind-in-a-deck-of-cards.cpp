class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        
        map <int,int> m;
        
        if(deck.size() <= 1)
            return false;
        
        for(int i = 0; i < deck.size(); i++){
            
            m[deck[i]]++;
            
        }
        
        int res = 0;
        
        for(auto i = m.begin(); i != m.end(); i++ ){
            
            res = __gcd(res, i -> second);
            
        }
        
        return res >= 2;
    }
};