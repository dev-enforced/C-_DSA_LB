/*
Input : 6
Output: 110
*/

#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int given_number,position=0;
    cin>>given_number;
    long long int result=0;
    while(given_number!=0){
        int remainder=given_number%2;
        result+=pow(10,position)*remainder;
        given_number=given_number/2;
        position++;
    }
    cout<<result;
}