class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int lmin =prices[0], rmax=0, ans =0;
        int l = 0, r = prices.size() -1;
        int sz = prices.size();
        for(int i =0; i < sz; i++){
            lmin = min(prices[i], lmin);
            rmax = max(rmax, (prices[i]-lmin));
        }
        return rmax;
        
    }
};
