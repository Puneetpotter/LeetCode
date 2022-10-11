class Solution {
public:
    int commonFactors(int a, int b) {
        int min,i=1,count=0;
        if(a<b)
            min=a;
        else
            min=b;
        while(i<=min){
            if(a%i==0&&b%i==0)
                count++;
            i++;
        }
        return count;
    }
};