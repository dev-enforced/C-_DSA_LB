/*
The pattern looks like this when printed
Input: 4
Output:
A
BB
CCC
DDDD

*/
#include<iostream>
using namespace std;
int main(){
    int current_row=1,row_number;
    cin>>row_number;
    while(current_row<=row_number){
        int current_column=1;
        while(current_column<=current_row){
            char printedValue='A'+current_row-1;
            cout<<printedValue;
            if(current_column!=current_row){
                cout<<" ";
            }
            current_column=current_column+1;
        }
        cout<<endl;
        current_row=current_row+1;
    }
}