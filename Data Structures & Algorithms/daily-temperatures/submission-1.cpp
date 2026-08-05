class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& T) {
        stack<int> temp;
        int sz = T.size();
        vector<int> ans(sz, 0);

        for(int i = 0; i<sz; i++){
        
            while(!temp.empty() && T[i]>T[temp.top()]){
                ans[temp.top()] = i-temp.top();
                temp.pop();
            }
            temp.push(i);
        }
        return ans;
    }
};
