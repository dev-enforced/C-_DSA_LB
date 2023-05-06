#include<iostream>
using namespace std;
/* Syntax of a function */
/*
{function_return_type} {function_return_name}(inputs_taken_by_the_function){
    ****
    logic_of_the_function
    ****
}
*/

int power(int num1,int num2){
    int ans=1;
    for(int i=1; i<=num2; i++){
        ans*=num1;                
    }
    return ans;
}

int main(){
    int a,b;
    cout<<endl<<"Provide 2 numbers: "<<endl;
    cin>>a>>b;
    cout<<"Answer is: "<<power(a,b)<<endl;


    int c,d;
    cout<<endl<<"Provide 2 numbers: "<<endl;
    cin>>c>>d;
    int answer = power(c,d);
    cout<<"Answer is: "<<answer<<endl;

    /*Reusing the variables just in case*/
    cout<<endl<<"Provide 2 numbers: "<<endl;
    cin>>a>>b;
    answer = power(a,b);
    cout<<"Answer is: "<<power(a,b)<<endl;



}