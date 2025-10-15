//Write a recursive function to find the nth Fibonacci number.
#include<iostream>
using namespace std;

int fib(int n){
    if (n<=1){
        return n;
    }
    else {
    return fib(n-1)+fib(n-2);
    }
}
int main(){
    int a;
    cout<<"Enter an integer: ";
    cin>>a;
    cout<<fib(a);
    return 0;
}