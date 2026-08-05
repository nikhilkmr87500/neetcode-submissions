class Solution {
public:
    int maxArea(vector<int>& heights) {
        int sz = heights.size();
        int water , l = 0, r = sz -1;
        int ans = 0;
        while(l<r)
        {
            water = (r-l)*(min(heights[l],heights[r]));
            ans = max(water, ans);
            if(heights[l]<=heights[r]){
                l++;
            } else {
                r--;
            }

        }
        return ans;
    }
};
