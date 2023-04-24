#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n. Start printing numbers from 1 to n: "<<endl;
    cin>>n;

    /*Variation 1 of for loop*/
    // for(int i=1;i<=n;i++){
    //     cout<<i<<endl;
    // }
    /**/

    /*Variation 2 of for loop*/
    // int i=1;
    // for(;i<=n;){
    //     cout<<i<<endl;
    //     i++;
    // }

    /*Infinite loop variation where without any condition the loop 
    keeps on going*/
    // int i=1;
    // for(;;){
    //     if(i<=n){
    //         cout<<i<<endl;
    //     }
    //     i++;
    // }

    /*How to avoid the infinite loop situation:
    We start using:
    - break : gets you out of the current loop
    */

//    int i=1;
//     for(;;){
//         if(i<=n){
//             cout<<i<<endl;
//         }else{
//             break;
//         }
//         i++;
//     }

    /*Can we introduce multiple variables and multiple conditions with
    updations too in the for loops*/
    for(int a = 0,b = 1, c=2;a >=0 && b>=1 && c>=2;a--,b--,c--){
        cout<<a<<" "<<b<<" "<<c<<endl;
    }

    

}