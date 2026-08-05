class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> temp;
        if(nums.size() == 0) return 0;
        for(auto i : nums){
            temp.insert(i);
        }
        long long count = 0, val = 0;
        auto last = temp.end();
        for(auto it = temp.begin(); it != last; it++){
            auto nxt = next(it);
            if(nxt != last && (*it)+1 == *nxt ){
                count++;
                val=max(val,count);
            } else {
                count = 0;
            }
        }
        return val+1;
    }
};
