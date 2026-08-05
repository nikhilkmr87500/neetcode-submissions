class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> st;
        int height, width, area = 0;
        for(int i = 0; i< heights.size(); i++){
            while(!st.empty() && heights[st.top()]>heights[i]){
                height = heights[st.top()];
                st.pop();
                if (st.empty()){
                    width = i;
                } else {
                    width = i - st.top() -1;
                }
                area = max(area, height*width);
            }
            
            st.push(i);
        }
        while(!st.empty()){
                height = heights[st.top()];
                st.pop();
                if (st.empty()){
                    width = heights.size();
                } else {
                    width = heights.size() - st.top() -1;
                }
                area = max(area, height*width);
        }
        return area;
    }
};
