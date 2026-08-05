
class MinStack {
public:
    stack<int> st, minst;
    MinStack() {
    }
    
    void push(int val) {
        st.push(val);
        if(minst.empty()||val<=minst.top()){
            minst.push(val);
        }
    }
    
    void pop() {
        if(st.empty()) return;
        int val = st.top();
        st.pop();
        if(!minst.empty() && val==minst.top()){
            minst.pop();
        }
        
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return minst.top();
    }
};
