/*
This is how the pattern looks when printed:
Input: 3
Output: 

***
***
***

*/
#include<iostream>
using namespace std;
int main(){
    int row_number;
    cin>>row_number;
    int current_row=0;
    while(current_row<row_number){
        int column_number=0;
        while(column_number<row_number){
            cout<<"*";
            column_number=column_number+1;
        }
        cout<<endl;
        current_row=current_row+1;

    }
}