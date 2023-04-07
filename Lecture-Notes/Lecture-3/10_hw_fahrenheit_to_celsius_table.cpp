// Given three values - Start Fahrenheit Value (S), 
// End Fahrenheit value (E) and Step Size (W), 
// you need to convert all Fahrenheit values from Start to End at the gap of W, 
// into their corresponding Celsius values and print the table.

#include<iostream>
using namespace std;
int main(){
    int fahrenheit_start_temperature,fahrenheit_end_temperature,counter;
    cin>>fahrenheit_start_temperature>>fahrenheit_end_temperature>>counter;
    while(fahrenheit_start_temperature<=fahrenheit_end_temperature){
        float celsius_temperature;
        celsius_temperature=(fahrenheit_start_temperature-32)*(5/9.0);
        cout<<"Celsius temperature for "<<fahrenheit_start_temperature<<" is : "<<celsius_temperature<<endl;
        fahrenheit_start_temperature=fahrenheit_start_temperature+counter;
    }

}

// Can refer to the testcases from this video: https://youtu.be/OAnDqn_OtAs