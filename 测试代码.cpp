class CQueue {
public:

    CQueue() {
        stack<int> stack1;
        stack<int> stack2;

    }
    
    void appendTail(int value) {
        stack1.push(value);
        
    }
    
    int deleteHead() {
        if (stack1.empty()) return -1;
        while (!stack1.empty())
        {
            stack2.push(stack1.top());
            stack1.pop();
            /* code */
        }
        int res = stack2.top();
        stack2.pop();
        while (!stack2.empty())
        {
            stack2.pop();
            stack1.push(stack2.top());
        }
        return res;
        
        
    }
};

/**
 * Your CQueue object will be instantiated and called as such:
 * CQueue* obj = new CQueue();
 * obj->appendTail(value);
 * int param_2 = obj->deleteHead();
 */