class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int sz1 = nums1.size(), sz2 = nums2.size();

        if(sz1 > sz2){
            return findMedianSortedArrays(nums2, nums1);
        }
        if(sz1 == 0){
            if(sz2%2 == 0) 
                return (double)(nums2[sz2/2-1]+nums2[sz2/2])/2;
            else
                return nums2[sz2/2];
        }

        int low = 0, high = sz1;
        while(low<=high){
            int partX= (low+ high)/2;
            int partY= (sz1 + sz2 +1)/2 - partX;

            int maxLeftX = (partX==0) ? INT_MIN : nums1[partX -1];
            int minRightX = (partX==sz1) ? INT_MAX : nums1[partX];

            int maxLeftY = (partY==0) ? INT_MIN : nums2[partY -1];
            int minRightY = (partY==sz2) ? INT_MAX : nums2[partY];

            if(maxLeftX <= minRightY && maxLeftY <= minRightX){
                if((sz1+sz2)%2 == 0){
                    return (double)(max(maxLeftX, maxLeftY) + min(minRightX, minRightY))/2;
                } else {
                    return (double)max(maxLeftX, maxLeftY);
                }
            } else if (maxLeftX > minRightY) {
                high = partX - 1;
            } else {
                low = partX + 1;
            }
        }
    }
};
