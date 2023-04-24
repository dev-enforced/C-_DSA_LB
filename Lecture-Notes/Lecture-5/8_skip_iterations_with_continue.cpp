/*
Continue is used for skipping particular iterations in a loop
Statements below continue are not even executed
*/

#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=5;i++){
        if(i==4){
            continue;
        }
        cout<<i<<endl;
    }

    /*
    Expected output:
    1
    2
    3
    5
    */

   for(int i=0;i<5;i++){
    cout<<"Hey"<<endl;
    continue;
    cout<<"After continue";
   }
   /*Expected output: Hey will be printed 5 times but after continue won't
   be printed at all as it is mentioned after continue*/
}