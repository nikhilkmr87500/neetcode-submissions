class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        
        vector<pair<int, double>> tmp;
        int sz = position.size(), fleet = 0;
        stack<double> st;
        for(int i = 0; i <sz; i++){
            double time = (double)(target -position[i])/speed[i];
            tmp.push_back({position[i], time});
        }
        sort(tmp.rbegin(),tmp.rend());

        for(auto it = tmp.begin(); it != tmp.end(); ++it){
            if(!st.empty() && st.top()>=it->second){
                
            } else {
                st.push(it->second);
            }
            
        }
        // if(fleet == 0) fleet++;
        return st.size() ;
    }
};
