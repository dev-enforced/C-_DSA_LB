#include<iostream>
using namespace std;
int main(){
    int series_number_end;
    cin>>series_number_end;
    int series_number_start=2,sum=0;
while(series_number_start<=series_number_end){
    sum+=series_number_start;
    series_number_start=series_number_start+2;
}
cout<<"Sum of even numbers from 1 to "<<series_number_end<<": "<<sum<<endl;
}
