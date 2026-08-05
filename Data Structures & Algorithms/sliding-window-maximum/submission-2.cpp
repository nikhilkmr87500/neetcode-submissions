class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        map<int, int> temp;
        int val = INT_MIN;
        vector<int> ans;
        int start =0, count =0;
        for(int i = 0; i< nums.size(); i++){
            temp[nums[i]]++;
            count++;
            if(count == k){
                auto it = temp.rbegin();
                ans.push_back(it->first);
                temp[nums[start]]--;
                if(temp[nums[start]] == 0){
                    temp.erase(nums[start]);
                }
                count--;
                start++;
                
            }
        }
        return ans;

    }
};
