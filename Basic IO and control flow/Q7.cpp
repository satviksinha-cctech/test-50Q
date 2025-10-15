//Print the first N Fibonacci numbers.
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
    int N;
    cout<<"Enter an integer: ";
    cin>>N;
    for(int i=1;i<=N;i++){
        cout<<fib(i)<<endl;
    }
    return 0;
}