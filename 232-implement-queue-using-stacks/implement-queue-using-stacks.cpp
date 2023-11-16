class MyQueue {
public:

    stack<int> st;
    MyQueue() {
        
    }
   void pushing(int x){
        if(st.empty()){
            st.push(x);
            return;
        }
        int num=st.top();
        st.pop();
        pushing(x);
        st.push(num);
   }
    void push(int x) {
       
        pushing(x);
    }
    
    int pop() {
        int t=st.top();
        st.pop();
        return t;
    }
    
    int peek() {
        return st.top();
    }
    
    bool empty() {
        //cout<<st.top();
        // if(st.size()==0)
        // return 1;
        // else
        // return 0;
        return st.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */