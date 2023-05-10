// https://leetcode.com/problems/implement-queue-using-stacks

class MyQueue {
public:

    stack<int> s1;
    stack<int> s2;
    MyQueue() {
        
    }
    
    void push(int x) {
        while(!s1.empty()) {
            s2.push(s1.top());
            s1.pop();
        }

        s1.push(x);

        while(!s2.empty()) {
            s1.push(s2.top());
            s2.pop();
        }
    }
    
    int pop() {
        if(empty()) return -1;
        int x = s1.top();
        s1.pop();
        return x;
    }
    
    int peek() {
        if(empty()) return -1;
        return s1.top();
    }
    
    bool empty() {
        return s1.empty();
    }
};
