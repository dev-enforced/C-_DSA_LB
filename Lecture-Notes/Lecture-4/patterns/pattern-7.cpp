/*
The pattern looks like this when printed:

Input: 4
Output:

1
2 3
3 4 5
4 5 6 7
*/

#include<iostream>
using namespace std;
int main(){
    int row_number,current_row=1;
    cin>>row_number;
    /* APPROACH 1
    while(current_row<=row_number){
        int column_number=1,value=current_row;
        while(column_number<=current_row){
            cout<<value;
            if(column_number!=current_row){
                cout<<" ";
            }
            value=value+1;
            column_number=column_number+1;
        }
        cout<<endl;
        current_row=current_row+1;
    }
    */
   /*Approach 2 without having to use the value variable*/
   /* 
        *: To revise this approach 2 of printing the pattern
   */
   /*
   while(current_row<=row_number){
    int column_number=current_row;
    while(column_number<2*current_row){
        cout<<column_number;
        if(column_number!=2*current_row){
            cout<<" ";
        }
        column_number=column_number+1;
    }
    cout<<endl;
    current_row=current_row+1;
   }
   */
  /*Approach 3 of printing this pattern*/
  /*
  * To revise this approach 3 of printing a pattern
  */
  while(current_row<=row_number){
    int column_number=1;
    while(column_number<=current_row){
        cout<<column_number+current_row-1;
        if(column_number!=current_row){
            cout<<" ";
        }
        column_number=column_number+1;
    }
    cout<<endl;
    current_row=current_row+1;
  }
}