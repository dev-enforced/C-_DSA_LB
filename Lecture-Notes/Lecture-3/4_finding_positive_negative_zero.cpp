#include<iostream>
using namespace std;
int main(){
    int number_given;
    cout<<"Please enter the value: "<<endl;
    cin>>number_given;
    // Approach 1 (using nested if else) : Not a clean one
    // if(number_given>0){
    //     cout<<number_given<<" is positive"<<endl;
    // }else{
    //     if(number_given<0){
    //         cout<<number_given<<" is negative"<<endl;
    //     }else{
    //         cout<<number_given<<" is zero"<<endl;
    //     }
    // }

    if(number_given>0){
        cout<<number_given<<" is positive"<<endl;
    }else if(number_given<0){
        cout<<number_given<<" is negative"<<endl;
    }else{
        cout<<number_given<<" is zero"<<endl;
    }
}