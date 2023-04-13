/* The pattern looks like this when printed */
/*
Input: 4
Output:
1111
 222
  33
   4

Spaced Output:
1 1 1 1
  2 2 2
    3 3
      4
*/

#include<iostream>
using namespace std;
int main(){
    int row_number,current_row=1;
    
    cin>>row_number;
    while(current_row<=row_number){
        int space_number=current_row-1;
        int digit_repeat_count = row_number-space_number;
        while(space_number>0){
            cout<<" ";
            /*Just for having a spaced pattern used this code from L29-31*/
            if(space_number!=0){
                cout<<" ";
            }
            space_number=space_number-1;
        }
        while(digit_repeat_count>0){
            cout<<current_row;
            /*Just for having a spaced pattern used this code from L37-39*/
            if(digit_repeat_count!=0){
                cout<<" ";
            }
            digit_repeat_count=digit_repeat_count-1;
        }
        
        cout<<endl;
        current_row=current_row+1;
    }
}