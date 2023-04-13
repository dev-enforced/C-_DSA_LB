/*
The pattern looks like this when printed
Input: 4
Output:
D
C D
B C D
A B C D
*/
#include<iostream>
using namespace std;
int main(){
    int current_row=1,row_number;
    char first_char='A';
    cin>>row_number;
    while(current_row<=row_number){
        char base_char=first_char+row_number-current_row;
        int current_column=1;
        while(current_column<=current_row){
            char printedValue=base_char+current_column-1;
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