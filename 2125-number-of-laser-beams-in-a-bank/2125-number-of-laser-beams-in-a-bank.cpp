class Solution {
public:
    void countDevices(int &curr, int row, int col, vector<string>& bank, int &count){
        
        for(int i=curr; i<row; i++){
            for(int j=0; j<col; j++){
                if(bank[i][j]=='1')
                    count++;
            }
            
            if(count>0){
                curr=i;
                return;
            }
        }
    }
    
    int numberOfBeams(vector<string>& bank) {
        int row=bank.size();
        int col=bank[0].size();
        int ans=0;
        int i=0;
        
        vector<int> noOfDevices;
        
        while(i<row){
            int count=0;
           // cout<<i<<endl;
            countDevices(i, row, col, bank, count);
            noOfDevices.push_back(count);
            i++;
        }
        
        for(int i=0; i<noOfDevices.size()-1; i++){
            //cout<<noOfDevices[i]<<endl;
            ans = ans+noOfDevices[i]*noOfDevices[i+1];
        }
        
        return ans;
    }
};