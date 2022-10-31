class Solution {
public:
    bool detectCapitalUse(string word) {
        int c=0;
        for(int i=0;i<word.size();i++){
            if(word[i]<='Z'&&word[i]>='A')
                c++;
        }
        if((c==1&&word[0]>'Z')||(c==1&&word[0]<'A'))
            return false;
        else if(c>1&&c!=word.size())
            return false;
        return true;
    }
};