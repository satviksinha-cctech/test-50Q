//Write a recursive function to find the factorial of a number.
#include<iostream>
using namespace std;

int fact(int n){
    if(n==0){
        return 1;
    }
    else{
    return n*fact(n-1);
    --n;
    }
}
int main(){
    int a;
    cout<<"Enter an integer: ";
    cin>>a;
    cout<<fact(a);
    return 0;
}