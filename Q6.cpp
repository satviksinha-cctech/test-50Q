//Calculate the factorial of a number using a loop
#include<iostream>
using namespace std;

int main(){
    int A,fact;
    cout<<"Enter an integer: ";
    cin>>A;
    
    for(int i=1;i<=A;i++){
        fact *= i;

    }
    cout<<fact;
    return 0;
    
}