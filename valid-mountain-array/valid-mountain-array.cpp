class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if(arr.size()<3)
            return false;
        else if(arr[0]>=arr[1])
            return false;
        else if(arr[arr.size()-1]>=arr[arr.size()-2])
            return false;
        int count=0;
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i]==arr[i+1])
                return false;
            if(count==0){
                if(arr[i]>arr[i+1])
                count++;
            }
            else if(count==1){
                if(arr[i]<=arr[i+1])
                    return false;
            }
        }
        return true;
    }
};