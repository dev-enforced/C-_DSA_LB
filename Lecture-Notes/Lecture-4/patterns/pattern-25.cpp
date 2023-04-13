/*The pattern printed looks like this*/
/*
Input: 5
Output:
1234554321
1234**4321
123****321
12******21
1********1

*/

#include<iostream>
using namespace std;
int main(){
    int current_row=1,row_number;
    cin>>row_number;
    while(current_row <= row_number){
        int current_column=1,decreasing_pattern_end_digit=row_number-current_row+1;
        while(current_column<=decreasing_pattern_end_digit){
            cout<<current_column;
            current_column=current_column+1;
        }
        int star_counter=2*(current_row-1);
        while(star_counter>0){
            cout<<"*";
            star_counter=star_counter-1;
        }
        int reverse_current_column=decreasing_pattern_end_digit;
        while(reverse_current_column>0){
            cout<<reverse_current_column;
            reverse_current_column=reverse_current_column-1;
        }
        cout<<endl;
        current_row=current_row+1;
    }
}