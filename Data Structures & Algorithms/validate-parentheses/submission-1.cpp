class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        
        for(auto i:s){
            if( i == '(' || i == '{' || i == '['){
                st.push(i);
            }
            if(i == ')'){
                if(!st.empty() && st.top()=='('){
                    st.pop();
                } else {
                    return false;
                }
                
            }
            if(i == '}'){
                if(!st.empty() && st.top()=='{'){
                    st.pop();
                } else {
                    return false;
                }
                
            }
            if(i == ']'){
                if(!st.empty() && st.top()=='['){
                    st.pop();
                } else {
                    return false;
                }
                
            }
        }
        if (!st.empty()) return false;
        return true;
    }
};
