//Write a recursive function to calculate the sum of digits of a number.
#include<iostream>
using namespace std;

int digit=0,sum=0;
int sum_of_digits(int n){

    if(n==0){
        return 0;
    }
    else{

        return (n%10)+sum_of_digits(n/10);
    }
}
int main(){
    int A;
    cout<<"Enter the number: ";
    cin>>A;
    cout<<sum_of_digits(A);
    return 0;
}