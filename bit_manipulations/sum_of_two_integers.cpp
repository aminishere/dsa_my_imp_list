// a + b == (a ^ b) + ((a & b) << 1)
// xor , AND is the sol how???
// xor will add sum w/o carry  a^b
//AND will find out carry , then we will left shift (yk , passing the bit to higher bit)

//a is partial sum, b is carry, we will keep until carry disappears
class Solution {
public:
    int getSum(int a, int b) {

        while(b){
            int carry= (a&b)<<1;
            a=a^b;
            b=carry;
  
        }
        return a;
    }
};
//lc 371
