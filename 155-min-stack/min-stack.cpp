class MinStack {
public:
    stack<int> mini,st;
    MinStack() {
        
    }
    
    void push(int val) {
        if(mini.empty()){
            mini.push(val);
        }
        else if(val<mini.top())
        mini.push(val);
        else
        mini.push(mini.top());
        st.push(val);
        
    }
    
    void pop() {
        mini.pop();
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return mini.top();
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