#include <iostream>
using namespace std;
int main(){
    char upper_case_z='Z';
    int ascii_Z=upper_case_z;
    cout<<ascii_Z<<endl; 
    /* One would get to see the ascii value of Z stored as
    an integer in b*/

    int ascii_lowercase_d = 100;
    char lowercase_d=ascii_lowercase_d;
    cout<<lowercase_d<<endl; 
    /* One would get to see the ascii value of lowercase d 
    being mapped to lowercase d while printing the character*/
    // char typecast_overflow=256;
    // // 100000000 (256 is the point where warnings start throwing up)
    // cout<<typecast_overflow<<endl;
    // If we try to store integers in char that are large for char itself to process based on the ascii codes
    // It will give us a warning

    // char try_again=296;
    // cout<<try_again<<endl;

    char demo=254;
    cout<<demo<<endl;
}