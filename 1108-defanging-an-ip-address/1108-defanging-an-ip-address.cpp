class Solution {
public:
    string defangIPaddr(string address) {
        string s,s1("[.]");
        for(int i=0;i<address.size();i++){
            char a=address[i];
            if(address[i]=='.')
                s.append(s1);
            else
                s.push_back(a);
        }
        return s;
    }
};