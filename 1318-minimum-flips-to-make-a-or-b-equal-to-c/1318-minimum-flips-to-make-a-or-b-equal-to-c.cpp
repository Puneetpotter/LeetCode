class Solution {
public:
    int minFlips(int a, int b, int c) {
        string st1 = bitset<32>(a).to_string();
        string st2 = bitset<32>(b).to_string();
        string st3 = bitset<32>(c).to_string();
        int count = 0;
        for(int i=0;i<32;i++){
                if(st3[i]=='0'){
                    if(st1[i] == '0' && st2[i] == '0')
                        continue;
                    else if(st1[i] == '1' && st2[i] == '1')
                        count+=2;
                    else
                        count++;
                }
            else
            {
               if(st1[i] == '0' && st2[i] == '0')
                   count++;
            }
            }
        
        return count;
    }
};