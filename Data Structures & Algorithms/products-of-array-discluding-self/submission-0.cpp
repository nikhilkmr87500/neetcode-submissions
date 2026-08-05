class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans;
        int mult = 1;
        bool inc_zero = false, sec_zero = false;
        for(auto i : nums){
            if(i != 0){
                mult*=i;
            } else {
                if(inc_zero){
                    sec_zero = true;
                }
                inc_zero = true;
            }
        }
        for(auto i : nums){
            if(i != 0){
                if(inc_zero){
                    ans.push_back(0);
                } else {
                    ans.push_back(mult/i);
                }
            } else {
                if (sec_zero){
                    ans.push_back(0);
                } else {
                    ans.push_back(mult);
                }
            }
        }
        return ans;
    }
};
