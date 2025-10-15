//Compute the sum of digits of a number.
#include<iostream>
using namespace std;
#include<iostream>
using namespace std;
int main(){
    int A, count=0,digit=0, sum=0;
    cout<<"Enter an integer: ";
    cin>>A;
    while(A !=0){
        
        digit=A%10;
        sum+=digit;
        A/=10;
    }   
    cout<<sum;
    return 0;
}