/*The pattern looks like this when printed*/
/*
Input: 4
Output: 
****
***
**
*

*/
#include<iostream>
using namespace std;
int main(){
    int row_number,current_row=1;
    cin>>row_number;
    while(current_row<=row_number){
        int star_number=row_number-current_row+1;
        while(star_number>0){
            cout<<"*";
            star_number=star_number-1;
        }
        cout<<endl;
        current_row=current_row+1;
    }
}