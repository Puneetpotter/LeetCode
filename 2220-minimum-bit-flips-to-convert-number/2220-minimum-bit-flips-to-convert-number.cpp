class Solution {
public:
    int minBitFlips(int start, int goal) {
        int count = 0;
        string st1 = bitset<32>(start).to_string();
        string st2 = bitset<32>(goal).to_string();
        for(int i=0;i<32;i++){
            if(st1[i]!=st2[i])
                count++;
        }
        return count;
    }
};