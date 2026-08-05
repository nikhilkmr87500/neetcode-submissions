class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix[0].size(), m = matrix.size();
        int left = 0, right = m*n -1;
        
        while(left <= right){
            int mid = left + (right -left)/2;
            int row = mid/n;
            int col = mid%n; 
            if(target < matrix[row][col]){
                right = mid -1;
            } else if (target > matrix[row][col]){
                left = mid +1;
            } else return true;
        }
        return false;
        
    }
};
