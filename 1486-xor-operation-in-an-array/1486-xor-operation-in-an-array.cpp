class Solution {
public:
    int xorOperation(int n, int start) {
        int xored=0,i=0;
        while(n!=0){
            xored=xored^(start+2*i);
            i++;
            n--;
        }
        return xored;
    }
};