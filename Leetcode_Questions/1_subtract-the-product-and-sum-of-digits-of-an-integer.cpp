/*Testcase 1:
Input: n = 234
Output: 15 (24 - 9)
*/

class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0,product=1;
        while(n>0){
            int current_digit=n%10;
            sum+=current_digit;
            product*=current_digit;
            n=n/10;
        }
        int result=product-sum;
        return result;
    }
};