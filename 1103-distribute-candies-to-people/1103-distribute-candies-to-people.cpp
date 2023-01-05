class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        
        vector <int> dis(num_people,0);
        
        int i = 1;
        
        while (candies > 0 && candies >=i){
            
            if (i % num_people == 0){
                dis[num_people - 1]+=i;
                candies -= i;
                i++;
            }
             else {
                 dis[(i % num_people) - 1] += i;
                 candies -= i;
                 i++;
             }
        }
        if(candies > 0){
            
            if (i % num_people == 0)
                dis[num_people - 1]+=candies;
            
            else 
                 dis[(i % num_people) - 1] += candies;
            
        }
        return dis;
    }
};