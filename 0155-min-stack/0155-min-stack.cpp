class MinStack {
public:
    stack<int>stk;
    MinStack() {
        
    }
    
    void push(int val) {
        stk.push(val);
    }
    
    void pop() {
        stk.pop();
    }
    
    int top() {
        return stk.top();
    }
    
    int getMin() {
        vector<int>arr;
        int ans=INT_MAX;
        while(!stk.empty()){
            ans=min(ans, stk.top());
            arr.push_back(stk.top());
            stk.pop();
        }
        reverse(arr.begin(), arr.end());
        for(int i=0; i<arr.size(); i++){
            stk.push(arr[i]);
        }
        return ans;
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