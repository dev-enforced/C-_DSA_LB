#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the value of a: "<<endl;
    cin>>a;    
    cout<<"Enter the value of b: "<<endl;
    cin>>b;
    char operator_given;
    cout<<"Enter the operation you wish to perform: "<<endl;
    cin>>operator_given;
    switch(operator_given){
        case '+':
            cout<<(a+b)<<endl;
            break;
        case '-':
            cout<<(a-b)<<endl;
            break;
        case '*':
            cout<<(a*b)<<endl;
            break;
        case '/':
            cout<<(a/b)<<endl;
            break;
        case '%':
            cout<<(a%b)<<endl;
            break;
        default:
            cout<<"Enter valid value for operator: "<<endl;
    }
}