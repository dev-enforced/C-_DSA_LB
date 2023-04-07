#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    // When running this block of code, lines after
    // this statement won't be executed unless an
    // integer input is passed into the variable n
    

    cout<<"This line of code will be seen after we pass an input to n"<<endl;
    cout<<"The value of n is: "<<n<<endl;

    // Checking whether a number is positive or negative
    int given_number;
    cin>>given_number;
    if(given_number>0){
        cout<<"Given number "<<given_number<<" is positive"<<endl;
    }else{
        cout<<"Given number "<<given_number<<" is negative"<<endl;
    }


}