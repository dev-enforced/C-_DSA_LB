/*The pattern looks like this when printed*/
/*
Input: 4
Output:

   1
  121
 12321
1234321 

*/

#include<iostream>
using namespace std;
int main(){
    int row_number,current_row=1;
    cin>>row_number;
    while(current_row<=row_number){
        int space_number=row_number-current_row;
        int current_column=1;
        while(space_number>0){
            cout<<" ";
            space_number=space_number-1;
        }
        while(current_column<=current_row){
            cout<<current_column;
            current_column=current_column+1;
        }
        int reverse_pattern_starting_digit=current_row-1;
        while(reverse_pattern_starting_digit>0){
            cout<<reverse_pattern_starting_digit;
            reverse_pattern_starting_digit=reverse_pattern_starting_digit-1;
        } 
        cout<<endl;
        current_row=current_row+1;
    }
}