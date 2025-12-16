// lc 34
// core : we will find first occurence of target and last occurence using binary search
class Solution {
public:
    int binarySearch(vector<int>&nums, int target, bool wantLeft){
        int low=0; int idx=-1;
        int high = nums.size()-1;
        while(low<=high){
            int mid=  low+ (high-low)/2;
            if(nums[mid]>target){
                high=mid-1;
            }else if(nums[mid]<target){
                low=mid+1;
            }else{
                idx= mid; //this is best candidate so far
                if(wantLeft){ // searching for left
                    high=mid-1;
                }else{
                    low=mid+1; //for right
                }
            }
        }
        return idx;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int leftBoundary = binarySearch(nums, target ,true);
        int rightBoundary = binarySearch(nums, target ,false);
        return {leftBoundary, rightBoundary};
    }
};
