/*
INT_MAX refers to the highest power of 2 that is not permitted in the integer
range i.e 2^31.

INT_MIN refers to the lowest value of 2 that is permitted in the integer
range i.e -2^31.

Testcase 1:
Input: x = 123
Output: 321

Testcase 2:
Input: x = -123
Output: -321
*/

class Solution {
public:
    int reverse(int x) {
        int ans = 0;
        while(x!=0){
            int current_digit = x%10;
            if((ans>INT_MAX/10)||(ans<INT_MIN/10)){
               return 0; 
            }
            ans=(ans*10)+current_digit;
            x=x/10;
        }
    }
};