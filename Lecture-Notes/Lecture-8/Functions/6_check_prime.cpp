#include<iostream>
using namespace std;
bool checkPrime(int input_given){
    if(input_given == 0 ||input_given== 1){
        return 0;
    }
    for(int i=2;i<=input_given/2;i++){
        if(input_given%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int given_number;
    cin>>given_number;
    if(checkPrime(given_number)){
        cout<<given_number<<" is a prime number"<<endl;
    }else{
        cout<<given_number<<" is not a prime number."<<endl;
    }
}