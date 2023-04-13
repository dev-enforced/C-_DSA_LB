/*
The pattern looks like this when printed
Input: 4
Output:

1234
 234
  34
   4
*/
#include<iostream>
using namespace std;
int main(){
    int current_row=1,row_number;
    cin>>row_number;
    while(current_row<=row_number){
        int space_number=current_row-1, column_number=current_row;
        while(space_number>0){
            cout<<" ";
            if(space_number!=0){
                cout<<" ";
            }
            space_number=space_number-1;
        }
        while(column_number<=row_number){
            cout<<column_number;
            if(column_number!=row_number){
                cout<<" ";
            }
            column_number=column_number+1;
        }
        cout<<endl;
        current_row=current_row+1;
    }

}