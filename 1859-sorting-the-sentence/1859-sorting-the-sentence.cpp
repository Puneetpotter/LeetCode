class Solution {
public:
    string sortSentence(string s) {
        
        map <int, string> m;
        stringstream ss(s);
        string temp;
        string ans = "";
        
        while(ss >> temp){
            
            int n = temp.size();
            int pos = temp[n - 1] - '1';
            temp.erase(temp.begin() + n - 1);
             m[pos] = temp;
         //    cout << temp << endl;
            
        }
        
        for(auto i = m.begin(); i != m.end(); i++){
            
            ans.append(i -> second);
            ans.push_back(' ');
            
        }
        
        ans.pop_back();
        
        return ans;
    }
};