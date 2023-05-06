#include<iostream>
using namespace std;

void printCounting(int input_given){
    for(int i=1;i<=input_given;i++){
        cout<<i;
        if(i!=input_given){
            cout<<" ";
        }
    }
    return;

}

int main(){
    int given_number;
    cin>>given_number;
    printCounting(given_number);
}