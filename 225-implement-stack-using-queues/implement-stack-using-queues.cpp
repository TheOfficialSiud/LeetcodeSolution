class MyStack {
   
public:
 queue<int> q1;

    MyStack() {
        
    }
    
    void push(int x) {
        q1.push(x);
    }
    
    int pop() {
         queue<int> q2;
        int i=1,n=q1.size();
    
        while(i<n){
            q2.push(q1.front());
            q1.pop();
            i++;
        }
        i=q1.back();
        q1.pop();
        while(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
        }
     
        return i;
    }
    
    int top() {
      
        return q1.back();
    }
    
    bool empty() {
        return q1.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */