class Solution {
public:
    int res = INT_MAX;
    void distribute(vector<int>&cookies, int k,vector<int>&b,int s){
        int n = cookies.size();
        if(s==cookies.size()){
           int  max =  *max_element(b.begin(),b.end());
           res = min(max,res);
            return;
        }
        for(int i=0;i<k;i++){
            b[i]+= cookies[s];
            distribute(cookies,k,b,s+1);
            b[i]-=cookies[s];
        }
    }
    int distributeCookies(vector<int>& cookies, int k) {
        vector<int>b(k,0);
        distribute(cookies,k,b,0);
        return res;
    }
};