// ques main motive : to find the common prefix of left and right.
//how ? from left to right, the bits will be flipped while going from left to right, and doing AND opertion will make it 0. So, only those bits will remain which donot flip, for eg 100(4) to 111(7) ans will be 1. 
// ps conside left and right are in bits,
class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int shift=0;
        while(left!=right){
            left=left>>1;
            right=right>>1;
            shift++;
        }
        return left<<shift; // we r doing cus to restore the shifts we have already done while loop
    }
};
