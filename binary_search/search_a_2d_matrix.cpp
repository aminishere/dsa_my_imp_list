//lc 74
// 2d flattened to 1d
class Solution {
public:

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m= matrix.size();
        int n= matrix[0].size();
        int high= m*n-1;
        int low =0;
        while(low<=high){
            int mid= low+ (high-low)/2;
            int value= matrix[mid/n][mid%n]; //keypoint
            if(value== target)return true;
            else if(value>target){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return false;
    }
};
