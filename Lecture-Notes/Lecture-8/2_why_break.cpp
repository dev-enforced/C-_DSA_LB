/*As soon as we avoid using break for a specific case, then you will observe
execution of steps of multiple cases starting from the satisfied condition
to the cases where break has not been used*/

#include<iostream>
using namespace std;
int main(){
    int num=2;
    char ch='1';
    cout<<endl;
    switch(num){
        case 1:
            cout<<"First"<<endl;
            break;
        case 2:
            cout<<"Second"<<endl;
            // break;
        default:
            cout<<"This is default case"<<endl;
    }
    cout<<endl;
    switch(ch){
        case 1:
            cout<<"FIRST number"<<endl;
            break;
        case '1':
            cout<<"numeric character"<<endl;
            // break;
        case 'a':
            cout<<"First character"<<endl;
            // break;
        case 'b':
            cout<<"Second character"<<endl;
            // break;
        default:
            cout<<"This is the default value"<<endl;
    }
    cout<<endl;
}