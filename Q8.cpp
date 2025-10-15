//Compute the power of a number without using built-in functions.
#include<iostream>
using namespace std;

int power(int x, int y){
    if (y == 0)
        return 1;
    if (y % 2 == 0)
        return power(x, y / 2) * power(x, y / 2);
    return x * power(x, y / 2) * power(x, y / 2);
}

int main(){
    int a, b;
    cout<<"Enter base: ";
    cin>>a;
    cout<<"Enter power: ";
    cin>>b;
    cout<<power(4,2);
    return 0;
}