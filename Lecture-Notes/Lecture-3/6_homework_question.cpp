#include<iostream>
using namespace std;
int main(){
    char ch;
    cin>>ch;
    int ascii_code=ch;
    if(ascii_code>=48 && ascii_code<=57){
        cout<<ch<<" : "<<"This is numeric"<<endl;
    }else if(ascii_code>=65 && ascii_code<=90){
        cout<<ch<<" : This is an uppercase character"<<endl;
    }else if(ascii_code>=97 && ascii_code<=122){
        cout<<ch<<" : This is a lowercase character"<<endl;
    }else{
        cout<<"Invalid character entered"<<endl;
    }
}