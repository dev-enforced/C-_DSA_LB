#include<iostream>
using namespace std;
int main(){
    int a=1,b=2;
    if(a-->0 || ++b>2){

        cout<<"Stage1 - Inside If "<<endl;
    }else{
        cout<<"Stage2 - Inside else "<<endl;
    }
    cout<<a<<" "<<b<<endl;

    // Expected Output:
    // Stage2 - Inside Else (WRONG)
    // 0 3 (WRONG)
    
    /*
    CORRECT OUTPUT:
    So the deciding condition is (a-- > 0) || (++b > 2). If one looks
    closely, both the statements or expressions are connected by
    logical OR operator. So if the expression on the left side of OR
    evaluates to true, then it won't even need to check for the 2nd
    expression on the right and hence that expression doesn't even get 
    executed

    So in our case too a-- > 0 so 1 > 0 gives true. Old value of a is 
    used for this comparison (i.e. 1) and then after the decrement it
    gets to 0. And then no need of evaluating the expression (++b >2).
    So the value of b also remains undisturbed. 

    Hence the output will be:
    
    Stage1: Inside If
    0 2
    
    */
    



}