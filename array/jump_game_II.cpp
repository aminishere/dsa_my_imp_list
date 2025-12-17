//lc 45
//we need to track additional curr reach, and when it surpasses the curr index , we jump, increment the counter
class Solution {
public:
    int jump(vector<int>& nums) {
        int maxReach=0;
        int currReach=0;
        int jumps=0;
        int n= nums.size();
        for(int i=0;i<n-1;i++){
            maxReach= max(maxReach, i+nums[i]);
            if(currReach==i){ //need to jump now
                currReach =maxReach;
                jumps++;
            }
        }
        return jumps;
    }
};
