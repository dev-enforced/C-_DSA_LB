/*
The pattern looks like this when printed

Input: 4
Output:
A
B C
C D E
D E F G

*/
#include<iostream>
using namespace std;
int main(){
    int row_number,current_row=1;
    char first_char='A';
    cin>>row_number;
    while(current_row<=row_number){
        char base_char=first_char+current_row-1;
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