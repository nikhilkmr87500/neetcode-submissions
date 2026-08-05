class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int sz = nums.size();
        int sum;
        vector<vector<int>> ans;
        set<vector<int>> temp;
        sort(nums.begin(), nums.end());
        for(int i = 0; i<sz; i++){
            if(i>0 && nums[i] == nums[i-1]) continue;
            int left =i+1, right = sz-1;
            while(left<right){
                int sum = nums[i] + nums[left] + nums[right];
                if(sum == 0){
                    ans.push_back({nums[i], nums[left], nums[right]});
                    left++;
                    right--;
                    while(left<right && nums[left] == nums[left-1] ) left++;
                    while(left<right && nums[right] == nums[right+1] ) right--;

                } else if(sum<0){
                    left++;
                } else{
                    right--;
                }

            }
        }
        return ans;
        
    }
};
