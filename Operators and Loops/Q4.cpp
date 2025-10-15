//Print all prime numbers between 1 and N.
#include<iostream>
using namespace std;

int main(){
   int N;
   bool isPrime=true;
   cout<<"Enter an integer: ";
   cin>>N;
   
   for(int i=2;i<=N;i++){
    bool isPrime=true;
//     if(N<=1){
//     continue;
//    }
    for(int j=2;j*j<=i;j++){
        if(i%j==0){
            isPrime=false;
            break;
        }
        // else {
        //     isPrime=true;
            
        // }
    }
    if(isPrime){
        cout<<i<<endl;
    }
   }
   return 0;
}