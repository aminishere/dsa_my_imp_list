// there are two types of binary search 
//1.  [ ...] -> both boundary including, and mid-1 , mid+1 , boundary adjusting
//2. { ...) -> low including, high excluding, and we update like mid-1, mid
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low =0;
        int high = nums.size()-1;
        while(low<=high){
            int mid= low +(high-low)/2;
            if(target == nums[mid]){
                return mid;
            }else if(target>nums[mid]){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        return low;
    }
};
//lc35
