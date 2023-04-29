/*Testcases:
Input: n = 16
Output: true
Explanation: 24 = 16

Input: n = 3
Output: false
*/

/*Approach 1*/
#include<math.h>
class Solution {
public:
    bool isPowerOfTwo(int n) {
        bool flag=false;
        for(int i=0;i<31;i++){
            int current_num = pow(2,i);
            if(n==current_num){
                flag=true;
                break;
            }
        }
        return flag;
    }
};
/*Approach 2*/

class Solution2 {
public:
    bool isPowerOfTwo(int n) {
        bool flag=false;
        int m = n;
        int binaryDigitCount=0;
        if(n==1){
            return true;
        }
        if(n<0){
            return false;
        }
        while(m != 0){
            if(m & 1 == 1){
                binaryDigitCount++;
            }
            m=m>>1;
        }
        if(binaryDigitCount==1){
            return true;
        }else{
            return false;
        }
        return flag;
    }
};

/*Approach 3*/
class Solution3 {
public:
    bool isPowerOfTwo(int n) {
       if(n<=0){
           return false;
       }
       
       return ((n&(n-1))==0);
    }
};