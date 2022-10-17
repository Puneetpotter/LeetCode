class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        vector<int>temp=arr;
        arr.clear();
        for(int i=0;i<temp.size();i++){
            arr.push_back(temp[i]);
            if(arr[arr.size()-1]==0)
                arr.push_back(0);
        }
        arr.erase(arr.begin()+temp.size(),arr.begin()+arr.size());
    }
};