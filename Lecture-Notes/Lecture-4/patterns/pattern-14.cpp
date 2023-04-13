/*
The pattern looks like this when printed
Input: 4
Output:
A
B C
D E F
G H I J
*/

#include<iostream>
using namespace std;
int main(){
    int current_row=1,row_number;
    char base_char='A';
    cin>>row_number;
    while(current_row<=row_number){
        int current_column=1;
        while(current_column<=current_row){
            cout<<base_char;
            base_char=base_char+1;
            if(current_column!=current_row){
                cout<<" ";
            }
            current_column=current_column+1;
        }
        cout<<endl;
        current_row=current_row+1;
    }
}