/* The pattern looks like this when printed
Input: 3
Output:

A B C
B C D
C D E

*/
#include<iostream>
using namespace std;
int main(){
    int row_number,current_row=1;
    char first_char='A';
    cin>>row_number;
    while(current_row<=row_number){
        int column_number=1;
        char base_char=first_char+current_row-1;
        while(column_number<=row_number){
            char printedValue=base_char+column_number-1;
            cout<<printedValue;
            if(column_number!=row_number){
                cout<<" ";
            }
            column_number=column_number+1;
        }
        cout<<endl;
        current_row=current_row+1;
    }
}