#include<iostream>
using namespace std;
int main(){
    char ch='1';
    int num = 4;
    switch(ch){
        case 'a':
            cout<<"First numeric character"<<endl;
        case '1':
            switch(num){
                case 1:
                    cout<<"First"<<endl;
                    break;
                case 2:
                    cout<<"Second"<<endl;
                    break;
                case 3:
                    cout<<"Third"<<endl;
                    break;
                case 4:
                    cout<<"Fourth"<<endl;
                    break;
                default:
                    cout<<"Having the default case for nested switch";
            }
            break;
        default:
            cout<<"This is the default case"<<endl;
    }
}