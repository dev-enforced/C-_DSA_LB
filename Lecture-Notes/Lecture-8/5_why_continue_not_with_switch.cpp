#include<iostream>
using namespace std;
int main(){
    for(int i=0;i<5;i++){
        switch(i){
            case 1:
                cout<<"First"<<endl;
                break;
            case 2:
                cout<<"Second"<<endl;
                break;
            case 3:
                continue;
            default:
                cout<<"This is default"<<endl;
        }
    }
    int num=1;


    // switch(num){
    //     case 1:
    //         continue;
    //     case 2:
    //         cout<<"This is second"<<endl;
    //         break;
    //     case 3:
    //         cout<<"This is third"<<endl;
    //         break;
    //     default:
    //         cout<<"A default statement"<<endl;
    //         break;
    // }
}