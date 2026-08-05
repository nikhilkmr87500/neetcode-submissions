class Solution {
public:
    int search(vector<int>& nums, int target) {
        int  l = 0, h = nums.size() -1, mid = (h+l)/2;
        // if (l==h && target == nums[l]) return l;
        while(l<=h) {    
            if(target < nums[mid]){
                h = mid -1;

            } else if (target > nums[mid]){
                l = mid+1;
                
            } else return mid;
            mid =l + (h -l)/2;
            // if(l==h && target != nums[mid]) return -1;
        }
        return -1;
    }
};
