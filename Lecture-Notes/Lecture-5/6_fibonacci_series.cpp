/* Printing fibonacci series with the number of fibonacci numbers
to be printed*/

/*
Input: 5
Output: 0 1 1 2 3
*/

#include<iostream>
using namespace std;
int main(){
    int a=0,b=1,n;
    cout<<"Enter the number of fibonacci digits to be printed:"<<endl;
    cin>>n;
    for(int iterator=1;iterator<=n;iterator++){
        int next_fibonacci_number=a+b;
        cout<<a;
        if(iterator!=n){
            cout<<" ";
        }
        a=b;
        b=next_fibonacci_number;
    }
}