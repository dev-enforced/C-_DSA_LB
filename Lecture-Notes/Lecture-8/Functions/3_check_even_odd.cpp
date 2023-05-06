/*
2 ways of checking whether number is even or odd:
-> By remainder
-> By doing bitwise AND of the number with 1 if it gives 1 then odd else even
*/

#include<iostream>
using namespace std;
bool checkEven(int number){
    if(number&1==1){
        return 0;
    }
    return 1;
}
int main(){
    int given_number;
    cin>>given_number;
    if(checkEven(given_number)){
        cout<<"Given number is an even number"<<endl;
    }else{
        cout<<"Given number is an odd number"<<endl;
    }

}