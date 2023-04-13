/*
The pattern looks when printed like this:
Input: 6
Output:
654321
654321
654321
654321
654321
654321

*/

#include<iostream>
using namespace std;
int main(){
    /*int row_number,current_row=1;
    cin>>row_number;
    while(current_row<=row_number){
        int column_number=row_number;
        while(column_number>0){
            cout<<column_number;
            column_number=column_number-1;
        }
        cout<<endl;
        current_row=current_row+1;
    }
    */

/* Using one more approach with 0 as lower limit for current row a
 and column */
   int row_number,current_row=0;
   cin>>row_number;
   while(current_row<row_number){
    int column_number=0;
    while(column_number<row_number){
        cout<<row_number-column_number;
        column_number=column_number+1;
    }
    cout<<endl;
    current_row=current_row+1;

   }
}