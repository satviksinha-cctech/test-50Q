//Write a recursive function to compute power(a, b).
#include<iostream>
using namespace std;

int pow(int x, int y){
    if(y==0){
        return 1;
    }
    else if(y%2==0) {
        return pow(x,y/2)*pow(x,y/2);
    }
    else{
        return x*pow(x,(y-1)/2)*pow(x,(y-1)/2);
    }
}
int main(){
    int A,B;
    cout<<"Enter Base: ";
    cin>>A;
    cout<<"Enter power: ";
    cin>>B;
    cout<<"Result is: "<<pow(A,B);
    return 0;
}