#include <iostream>
using namespace std;
int main(){
    int variable_one=45;
    float variable_two=39.86;
    double variable_three=81.22;
    char variable_four='h';
    bool variable_five=1,variable_six=false;

    cout<<"Integer (int) is: "<<variable_one<<endl;
    cout<<"Floating point variable (float) is: "<<variable_two<<endl;
    cout<<"Double floating point variable (double) is: "<<variable_three<<endl;
    cout<<"Character based variable (char) is: "<<variable_four<<endl;
    cout<<"Boolean based variables(bool) is: "<<variable_five<<" "<<variable_six<<endl;
    cout<<"Booleans when printing would always be displayed as 0(false) or 1(true) accordingly"<<endl;

    cout<<"-----------------"<<endl;
    cout<<"Size of declared variables"<<endl;
    cout<<"Size of int: "<<sizeof(variable_one)<<endl;
    cout<<"Size of float: "<<sizeof(variable_two)<<endl;
    cout<<"Size of double: "<<sizeof(variable_three)<<endl;
    cout<<"Size of char: "<<sizeof(variable_four)<<endl;
    cout<<"Size of bool: "<<sizeof(variable_five)<<endl;



}