/*The pattern looks like this when printed*/
/*
Input: 4
Output:
   1
  22
 333
4444   
*/

#include<iostream>
using namespace std;
int main(){
    int row_number,current_row=1;
    cin>>row_number;
    while(current_row<=row_number){
        int space_number=row_number-current_row;
        int column_number=1;
        while(space_number>0){
            cout<<" ";
            if(space_number!=0){
                cout<<" ";
            }
            space_number=space_number-1;
        }
        while(column_number<=current_row){
            cout<<current_row;
            if(column_number!=current_row){
                cout<<" ";
            }
            column_number=column_number+1;
        }
        cout<<endl;
        current_row=current_row+1;
    }
}