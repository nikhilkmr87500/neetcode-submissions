class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {

        int maxi = INT_MIN;

        for(auto i : piles){
            maxi = max(maxi, i);
        }
        int lrate = 1, hrate = maxi;
        int ans = maxi;
        while(lrate <= hrate){
            int hours =0;
            int k = lrate + (hrate - lrate)/2;
            for(auto i : piles){
                hours += (i+k -1)/k;
            }
            if(hours <= h){
                ans = k;
                hrate = k-1;
            }
            else{
                lrate = k+1;
            }
        }
        return ans;
    }
};
