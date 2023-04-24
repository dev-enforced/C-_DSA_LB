class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count=0;
        while(n!=0){
            /*
            Now for checking whether the last digit is 1 or 0, we make use of bitwise AND 
            (single &) to check the same
             
             If bitwise AND of the given number and 1 returns 1 then the last digit is 1
             If bitwise OR of the given number and 1 returns 0 then the last digit is 0  
            */
            if(n&1==1){
                count=count+1;
            }
            n=n>>1;

        }
        return count;
    }
};