/*The pattern looks like this when printed*/
/*
Input: 4

Output: 
   1
  23
 456
78910      
*/

#include<iostream>
using namespace std;
int main(){
    int current_row=1,row_number,counter=1;
    cin>>row_number;
    while(current_row<=row_number){
        int space_count=row_number-current_row;
        while(space_count>0){
            cout<<" ";
            if(space_count!=0){
                cout<<" ";
            }
            space_count=space_count-1;
        }
        int current_column=1;
        while(current_column<=current_row){
            cout<<counter;
            if(current_column!=current_row){
                cout<<" ";
            }
            counter=counter+1;
            current_column=current_column+1;
        }
        cout<<endl;
        current_row=current_row+1;
    }
}