//lc 153
// converging high-low to min val
class Solution {
public:
    int findMin(vector<int>& nums) {
        int high= nums.size()-1;
        int low =0;
        while(low<high){ //we need to converge to min val
            int mid = low+(high-low)/2;
            if(nums[mid]>nums[high]){ //pivot on right
                low=mid+1;
            }else{
                high=mid;
            }
        }
        return nums[low];
        
    }
};
