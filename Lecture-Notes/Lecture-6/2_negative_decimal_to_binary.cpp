/*
Input: -6
Output: 6 -> 110
        1's complement -> 001
        2's complement -> 11111111(28 bits)010
*/

#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int given_number;
    cin>>given_number;
    /* Declaring a variable which can store binary related representation 
    so using long long for it*/
    long long int a=1;
    /*Since int has 32 bits so we are running the loop in reverse manner*/
    for(int i=31;i>=0;i--){
        if(given_number&(a<<i)){
            cout<<"1";
        }else{
            cout<<"0";
        }
        
    }
}


/*Chat GPT approach for decimal to binary numbers*/
// #include <iostream>
// using namespace std;

// string decimalToBinary(int decimalNum) {
//     string binaryNum = "";
//     int absNum = abs(decimalNum); // Get absolute value of decimal number
    
//     // Convert decimal number to binary
//     do {
//         binaryNum = to_string(absNum % 2) + binaryNum;
//         absNum /= 2;
//     } while (absNum != 0);
    
//     // Add sign bit for negative numbers
//     if (decimalNum < 0) {
//         binaryNum = "1" + binaryNum;
//     } else {
//         binaryNum = "0" + binaryNum;
//     }
    
//     return binaryNum;
// }

// int main() {
//     int decimalNum = -21;
//     string binaryNum = decimalToBinary(decimalNum);
//     cout << decimalNum << " in binary is " << binaryNum << endl;
    
//     return 0;
// }