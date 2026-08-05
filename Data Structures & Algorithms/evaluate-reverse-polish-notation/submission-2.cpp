class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        // string ftok, stok, ttok;
        // ftok = s[0];
        // stok = s[1];
        // ttok = s[2];
        // queue<string> opt;
        stack<int> str;
        int ttok;
        int ans = stoi(tokens[0]);
        // for(int i = 0; i<tokens.size(); i++){
        //     if(tokens[i] == "+" || tokens[i] == "-" 
        //        || tokens[i] == "*" || tokens[i] == "/") {
        //         opt.push(tokens[i]);
        //     }
        //     else {
        //         str.push(stoi(tokens[i]));
        //     }
            
        // }
        // ans = stoi(tokens[0]);
        
        for(int i = 1; i < tokens.size(); i++){
            if(tokens[i] == "+"){
                ans = ans + str.top();
                str.pop();
            }
            else if(tokens[i] == "-"){
                ans = str.top() - ans;
                str.pop();
            }
            else if(tokens[i] == "*"){
                ans = ans * str.top();
                str.pop();
            }
            else if(tokens[i] == "/"){
                ans = str.top() / ans;
                str.pop();
            }
            else{
                str.push(ans);
                ans = stoi(tokens[i]);
            }
            
        }
        return ans;
    }
};
