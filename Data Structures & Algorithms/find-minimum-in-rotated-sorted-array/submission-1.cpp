class Solution {
public:
    int findMin(vector<int> &nums) {
        int sz = nums.size();
        if (nums[0]<= nums[sz-1]) return nums[0];
        int l = 0, r = sz -1;
        while(l <= r){
            int mid = l + (r-l)/2;
            if(nums[mid]<nums[mid+1] && nums[mid]<nums[l]){
                r = mid;
            } else if(nums[mid]<nums[mid+1] && nums[mid] > nums[l]){
                l = mid;
            }
            else return nums[mid+1];
        }
        
    }
};
