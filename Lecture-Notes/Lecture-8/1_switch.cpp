#include<iostream>
using namespace std;
int main(){
    int num = 2;
    cout<<endl;
    switch(num){
        case 1:
            cout<<"First"<<endl;
            break;
        case 2:
            cout<<"Second"<<endl;
            break;
        default:
            cout<<"This is default case"<<endl;
    }
    cout<<endl;

    // char ch='a';
    char ch='b';
    switch(ch){
        case 1:
            cout<<"FIRST number"<<endl;
            break;
        case 'a':
            cout<<"First character"<<endl;
            break;
        default:
            cout<<"This is the default value"<<endl;
    }
    cout<<endl;
}