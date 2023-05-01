#include<iostream>
using namespace std;
int main(){
    int num=1;
    while(1){
        switch(num){
            case 1:
                cout<<"First"<<endl;
                exit(0);
                // break;
            case 2:
                cout<<"Second"<<endl;
                break;
            case 3:
                cout<<"Third"<<endl;
                break;
            default:
                cout<<"Default case details"<<endl;
        }
    }
}