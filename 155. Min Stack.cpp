class MinStack {
public:
    stack<int> s;
    stack<int> r;
    
    MinStack() {}
    
    void push(int val) {
        s.push(val);
        r.push(min(val, r.empty()?val:r.top()));
    }
    
    void pop() {
        s.pop();
        r.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return r.top();
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