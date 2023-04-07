/*
The pattern looks like this when printed:
Input: 4
Output:

1111
2222
3333
4444
*/
#include<iostream>
using namespace std;
int main(){
    int row_number,current_row=1;
    cin>>row_number;
    while(current_row<=row_number){
        int column_number=1;
        while(column_number<=row_number){
            cout<<current_row;
            column_number=column_number+1;
        }
        cout<<endl;
        current_row=current_row+1;
    }
}