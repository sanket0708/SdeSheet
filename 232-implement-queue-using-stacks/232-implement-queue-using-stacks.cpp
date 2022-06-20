class MyQueue {
public:
    stack<int>q1;
    stack<int>temp;
    MyQueue() {
        
    }
    
    void push(int x) {
         while(!q1.empty())
        {
            temp.push(q1.top());
            q1.pop();
        }
        temp.push(x);
        while(!temp.empty()){
            q1.push(temp.top());
            temp.pop();
        }
    }
    
    int pop() {
        int p=q1.top();
        q1.pop();
        return p;
    }
    
    int peek() {
        return q1.top();
    }
    
    bool empty() {
        return q1.empty();
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