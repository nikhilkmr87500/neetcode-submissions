class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> temp;
        int val_1 =0, val_2 =0;
        for(int i = 0; i <nums.size(); i++){
            if((temp.find(target - nums[i]) != temp.end())){
                
                return {temp[target - nums[i]], i};
            }
            temp[nums[i]] = i;
            
        }
        

        vector<int> ans;
        if(val_1 < val_2){
            ans.push_back(val_1);
            ans.push_back(val_2);
        } else {
            ans.push_back(val_2);
            ans.push_back(val_1);
        }
        return ans;
    }
};
