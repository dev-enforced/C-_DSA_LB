/*
The pattern looks like this when printed:

Input: 5
Output:

*
**
***
****
*****
*/

#include<iostream>
using namespace std;
int main(){
    int row_number,current_row=1;
    cin>>row_number;
    while(current_row<=row_number){
        int column_number=1;
        while(column_number<=current_row){
            cout<<"*";
            column_number=column_number+1;
        }
        cout<<endl;
        current_row=current_row+1;
    }
}