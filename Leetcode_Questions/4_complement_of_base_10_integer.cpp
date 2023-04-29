/*
Testcase 1:
Input: n = 7
Output: 0

Explanation: 
7 is "111" in binary, with complement "000" in binary,
 which is 0 in base-10.
*/


/*
Approach thought first:
1. Take an input for example 7
2. Binary format of 7 : 111
3. What is the expected output will be complement of this binary format
- 000 which means 0 in decimal system

4. Whenever we take complement through negation (~) it not only flips the bits
representing the value but also the bits prior to it as signs are also getting 
changed. So the negation of 7 will give us -8 (through ~7 with binary format 1000)

5. So how to do flipping of bits but without disturbing the bits prior to it
6. An approach to it can be by creating a mask which will be initially 00000000
in binary format
7. We will go through the binary format of the given number itself 
and modify the mask by doing left shift first and performing bitwise OR with 1
till the given number gets reduced to 0 by right shifts simultaneously

8. After the mask gets generated which in our case for 7 will be 0000111
9. Now we would be able to perform bitwise AND of the mask and negation of 7
that will ultimately give us the desired complement


*/

/*Approach 1*/

class Solution1 {
public:
    int bitwiseComplement(int n) {
        int m=n, mask = 0;
        if(n==0){
            return 1;
        }
        while(m!=0){
            mask = (mask<<1) | 1;
            m = m>>1;
        }
        int finalAnswer = ((~n) & mask);
        return finalAnswer;

    }
};

/*Approach 2*/
class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0){
            return 1;
        }
        int m=n,maskCount=0,mask=0;
            while(m != 0){
            maskCount++;
            m = m>>1;
        } 
        while(maskCount>0){
            mask=(mask<<1) | 1;
            maskCount--;
        }
        return (~n & mask);
    }
};


