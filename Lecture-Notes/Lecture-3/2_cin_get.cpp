#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
cout<<a<<" "<<b<<endl;
// One would notice by giving space,tab or enter
// cin won't read it at all while running the program
    int c,d;
    cin.get();
    c=cin.get();
    cout<<c<<endl;
    // So using cin.get() enables us to take space or tab or enter
}