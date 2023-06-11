class SnapshotArray {
    int snapi=0;
    vector< map<int, int>> a;
public:
    
    SnapshotArray(int length) {
        a.resize(length);
        for(auto &i: a)
          i[0]=0;
        snapi=0;
    }
    
    void set(int index, int val) {
         a[index][snapi]= val;
    }
    
    int snap() {
        return snapi++;
    }
    
    int get(int index, int snap_id) {
        return ((--a[index].upper_bound(snap_id))->second); 
    }
};