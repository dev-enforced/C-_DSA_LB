/*
Input: 100010
Output: 34
*/
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    long long int given_binary_number;
    int result=0,position=0;
    cin>>given_binary_number;
    while(given_binary_number>0){
        int current_digit=given_binary_number%10;
        result+=pow(2,position)*current_digit;
        given_binary_number=given_binary_number/10;
        position++;
    }
    cout<<result<<endl;
}