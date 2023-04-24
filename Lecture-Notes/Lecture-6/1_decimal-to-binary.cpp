/*
Input: 5
Output: 101
*/

#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int given_number,result=0,counter=1;
    cin>>given_number;
    while(given_number!=0){
        int current_bit=given_number&1;
        result+=pow(10,counter-1)*current_bit;
        counter++;
        given_number=given_number>>1;
    }
    cout<<result;
}

/* For bigger numbers this approach might not work to get binary form
as integers can store only numbers from -2^31 --- 2^31-1
*/