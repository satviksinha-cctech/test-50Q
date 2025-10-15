//Convert Celsius temperature to Fahrenheit.
//C=(5/9)(F-32)
//F=(9/5)C+32=1.8*C+32
#include<iostream>
using namespace std;
int main(){
    int C, F;
    cout<<"Enter temperature in Celsius: ";
    cin>>C;
    F = 1.8*C+32;
    cout<<"Temperature in Farenheit is "<<F;
    return 0;
}