#include<iostream>
using namespace std;
int main(){
    int given_number,sum=0;
    cin>>given_number;
    for(int iterator=1;iterator<=given_number;iterator++){
        sum+=iterator;
    }
    cout<<sum<<endl;
}