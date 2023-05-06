#include<iostream>
using namespace std;
int main(){
    /*Suppose you are given 2 numbers and have to calculate the value of
    their power (or one raised to the another) a^b*/

    int a,b;
    cout<<endl<<"Provide 2 numbers: "<<endl;
    cin>>a>>b;
    int ans = 1;
    for(int i=1;i<=b;i++){
        ans*=a;
    }
    cout<<ans<<endl;

/*Suppose if I give you 2 more numbers and want to calculate the same related
to one raised over the other (like c^d)*/
    int c,d;
    cout<<endl<<"Provide 2 numbers: "<<endl;
    cin>>c>>d;
    ans = 1;
    for(int i=1;i<=d;i++){
        ans*=c;
    }
    cout<<ans<<endl;

/* As I want to do the same above mentioned task for other 2 numbers
 Then again some part of the code would be repeated and the same logic
 used for calculating

 So how can one avoid this repetitions again and again resulting in a lot 
 of code 
 Suppose there is a bug in the logic it gets carried forward while calculating
 other results as well.

 - Bulky
 - Buggy
 - Not readable
 */


/*Solution: Using functions. What is a function? It is a program 
which is a well defined logical task that gives us some output based on the 
inputs */
}