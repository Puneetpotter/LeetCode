class Solution {
public:
    string frequencySort(string s) {
        
        map <char, int> m;
        multimap <int, char, greater<int>> mm;
        string ans = "";
        
        for(int i = 0; i < s.size(); i++){
            
            m[s[i]]++;
        }
        
        for(auto i:m){
            
            mm.insert({i.second, i.first});
        }
        
        for(auto i:mm){
            
            int temp = i.first;
            
            while(temp--)
                ans.push_back(i.second);
        }
        
        return ans;
    }
};