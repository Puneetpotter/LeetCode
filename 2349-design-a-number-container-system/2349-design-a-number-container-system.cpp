class NumberContainers {
public:
    map<int, set<int>>m;
    map<int, int>mp;
    NumberContainers() {
    }
    
    void change(int index, int number) {
        m[mp[index]].erase(index);
        m[number].insert(index);
        mp[index]=number;
    }
    
    int find(int number) {
        if(m.find(number)==m.end())
            return -1;
        
        else if(*(m[number].begin())==0)
            return -1;
        
        else
            return *(m[number].begin());
    }
};

/**
 * Your NumberContainers object will be instantiated and called as such:
 * NumberContainers* obj = new NumberContainers();
 * obj->change(index,number);
 * int param_2 = obj->find(number);
 */