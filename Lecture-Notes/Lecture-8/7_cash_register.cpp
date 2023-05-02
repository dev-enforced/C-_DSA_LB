/*
Given an amount. Tell how many notes of denominations 100, 50, 20 & 1 are
required to make that amount
*/
#include<iostream>
using namespace std;
int main(){
    int cash_register_amount = 0;
    cout<<"Enter the amount you wish to see cash distribution for: "<<endl;
    cin>>cash_register_amount;
    /*Approach without switch*/
    // while(cash_register_amount!=0){
    //     if(cash_register_amount>=100){
    //         int number_of_notes = cash_register_amount/100;
    //         cout<<"Number of 100 notes: "<<number_of_notes<<endl;
    //         cash_register_amount=cash_register_amount%100;
    //     }else if(cash_register_amount>=50){
    //         int number_of_notes = cash_register_amount/50;
    //         cout<<"Number of 50 notes: "<<number_of_notes<<endl;
    //         cash_register_amount=cash_register_amount%50;
    //     }else if(cash_register_amount>=20){
    //         int number_of_notes = cash_register_amount/20;
    //         cout<<"Number of 20 notes: "<<number_of_notes<<endl;
    //         cash_register_amount=cash_register_amount%20;
    //     }else if(cash_register_amount>=1){
    //         int number_of_notes = cash_register_amount/1;
    //         cout<<"Number of 1 coins: "<<number_of_notes<<endl;
    //         cash_register_amount=cash_register_amount%100;
    //         break;
    //     }
    // }
    
    /*Approach with switch*/
    switch(1){
        case 1:
            cout<<"Number of 100 rupee notes: "<<(cash_register_amount/100)<<endl;
            cash_register_amount=cash_register_amount%100;
        case 2:
            cout<<"Number of 50 rupee notes: "<<(cash_register_amount/50)<<endl;
            cash_register_amount = cash_register_amount%50;
        case 3:
            cout<<"Number of 20 rupee notes: "<<(cash_register_amount/20)<<endl;
            cash_register_amount=cash_register_amount%20;
        case 4:
            cout<<"Number of 1 rupee coins: "<<(cash_register_amount/1)<<endl;
            break;
    }
    
}