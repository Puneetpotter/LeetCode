class Solution {
public:
    string truncateSentence(string s, int k) {
        int space=0;
        string str;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==' ')
                space++;
            if(space==k && s[i]==' ')
                break;
          str+=(s[i]);    
        }
        return str;
    }
};