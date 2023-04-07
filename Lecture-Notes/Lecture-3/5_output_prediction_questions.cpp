#include<iostream>
using namespace std;
int main(){
    // Q1;
    cout<<"Guess the output for question 1"<<endl;
    int a=9;
    if(a==9){
        cout<<"NINEY"<<endl;
    }
    if(a>0){
        cout<<"POSITIVE"<<endl;
    }else{
        cout<<"NEGATIVE"<<endl;
    }
cout<<endl;
    // Expected output:
    // NINEY
    // POSITIVE

    cout<<"Guess the output for question 2"<<endl;
    int c=2;
    int d=c+1;
    if((c=3)==d){
        cout<<c<<endl;
    }else{
        cout<<c+1<<endl;
    }

    // Expected output:
    // 3
    cout<<endl;
    cout<<"Guess the output for question 3:"<<endl;
    int e=24;
    if(e>20){
        cout<<"Love"<<endl;
    }else if(e==24){
        cout<<"Lovely"<<endl;
    }else{
        cout<<"Babbar"<<endl;
    }
    cout<<e<<endl;
    // Expected output:
    // Love
    // 24
}