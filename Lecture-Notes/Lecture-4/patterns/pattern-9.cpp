/*
This is how the pattern looks when printed
Input: 3
Output:
AAA
BBB
CCC
*/
#include<iostream>
using namespace std;
int main(){
    int row_number,current_row=1;
    cin>>row_number;
    while(current_row<=row_number){
        int column_number=1;
        while(column_number<=row_number){
            char printedValue='A'+current_row-1;
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