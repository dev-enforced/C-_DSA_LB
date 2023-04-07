#include<iostream>
using namespace std;
int main(){
    int given_number;
    cin>>given_number;
    int factor=2;
    while(factor<given_number){
        if(given_number%factor==0){
            cout<<"Not prime for: "<<factor<<endl;
        }else{
            cout<<"Prime for: "<<factor<<endl;
        }
        factor=factor+1;
    }
}

// Still incomplete will proceed to the logic in lecture 4