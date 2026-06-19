class MinStack {
public:
    stack<pair<int, int>>s;
    MinStack() {
        
    }
    int minval;
    
    void push(int val) {
        if(s.empty()) s.push({val,val});
        else{
            minval=min(val,s.top().second);
            s.push({val,minval});
        }
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
