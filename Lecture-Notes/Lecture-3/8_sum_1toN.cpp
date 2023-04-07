#include<iostream>
using namespace std;
int main(){
    int series_end_number;
    cin>>series_end_number;
    int series_start_number=1,sum=0;
    while(series_start_number<=series_end_number){
        sum+=series_start_number;
        series_start_number=series_start_number+1;
    }
    cout<<"Value of sum: "<<sum<<endl;

    // Another way of finding sum from 1 to N: (last_number/2)*(first_number+last_number)
}