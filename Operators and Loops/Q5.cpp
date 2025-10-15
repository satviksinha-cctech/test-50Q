//Check if a given number is prime.
#include<iostream>
using namespace std;

int main(){
    int n;
    bool isPrime;
    cout<<"Enter an integer: ";
    cin>>n;
    if(n<=1){
        cout<<"Not a Prime";
    }
    else {
        for(int i=2;i<n;i++){
            if(n%2==0){
                isPrime = false;
            }
            else{
                isPrime = true;
            }
        }
    }
    if(isPrime){
        cout<<"Prime Number";
    }
    else {
        cout<<"Not a Prime Number";
    }
    return 0;
}