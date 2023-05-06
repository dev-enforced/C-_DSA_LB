#include<iostream>
using namespace std;

int factorial(int input_given){
    int ans=1;
    for(int i=1;i<=input_given;i++){
        ans*=i;
    }
    return ans;
}

int nCr(int input1,int input2){
    int num = factorial(input1);
    int denom = factorial(input2) * factorial(input1-input2);
    return num/denom;
}

int main(){
    int n,r;
    cin>>n>>r;
    cout<<"Value of nCr is: "<<nCr(n,r)<<endl;
}