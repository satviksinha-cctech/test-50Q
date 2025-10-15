//Compute the sum of all even numbers from 1 to N.
#include<iostream>
using namespace std;

int main(){
    int N, sum=0;
    cout<<"Enter an integer: ";
    cin>>N;
    for(int i=1;i<=N;i++){
        if(i%2==0){
            // cout<<i;
            sum+=i;
        }        
    }
    cout<<sum;
    return 0;
}