//Count the digits in a number.
#include<iostream>
using namespace std;
int main(){
    int A, count=0;
    cout<<"Enter an integer: ";
    cin>>A;
    while(A !=0){
        
        A/=10;
        count++;

    }   
    cout<<count;
    return 0;
}