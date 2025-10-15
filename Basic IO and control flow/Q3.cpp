//Check whether a number is even or odd.
#include<iostream>
using namespace std;

int main(){
    int A;
    cout<<"Enter an integer: ";
    cin>>A;
    if(A%2==0){
        cout<<"Integer is even";
    }
    else {
        cout<<"Integer is odd";
    }
    return 0;
}