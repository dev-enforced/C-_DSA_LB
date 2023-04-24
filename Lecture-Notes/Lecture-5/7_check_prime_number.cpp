/* Checking whether a number is prime or not*/
/*
Input: 7
Output: Prime
*/

#include<iostream>
using namespace std;
int main(){
    int given_number;
    cin>>given_number;
    if(given_number>=0){
        if(given_number == 0 ){
            cout<<"0 cannot be considered as a prime number"<<endl;
        }else if(given_number==1){
            cout<<"1 is neither prime nor a composite number"<<endl;
        }else{
            bool isPrime=true;
            for(int iterator=2;iterator<given_number/2;iterator++){
                if(given_number%iterator==0){
                    // cout<<given_number<<" is Not a prime number"<<endl;
                    isPrime=false;
                    break;
                }
            } 
            if(isPrime==0){
                cout<<given_number<<" is Not a prime number"<<endl;
            }else{
                cout<<given_number<<" is a prime number"<<endl;
                    
            }
        }

    }else{
        cout<<"Negative numbers are not considered for evaluation here"<<endl;
    }
}