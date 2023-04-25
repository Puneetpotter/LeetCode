class MinStack {
public:
    MinStack() {}
    
    stack< pair <int, int>> s;
    
    void push(int val) {
        if(s.empty())
            s.push({val, val});
        
        else
            s.push({val, min(s.top().second, val)});  
    }
    
    void pop() {
        s.pop();
    }
    
    int top() {
        return s.top().first;
    }
    
    int getMin() {
        return s.top().second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */