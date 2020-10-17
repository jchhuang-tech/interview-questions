class MinStack {
public:
    /** initialize your data structure here. */
    stack<int> a;
    stack<int> b;

    MinStack() {

    }

    void push(int x) {
        a.push(x);
        if(b.empty() || x<=b.top()){
            b.push(x);
        }
    }

    void pop() {
        if(a.top() == b.top()){
            b.pop();
        }
        a.pop();
    }

    int top() {
        return a.top();
    }

    int getMin() {
        return b.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
