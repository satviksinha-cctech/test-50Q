//Find the greatest common divisor (GCD) of two numbers.
#include<iostream>
using namespace std;

int main(){
    int a,b, min, max;
    cout<<"Enter two integers: "<<endl;
    cin>>a>>b;
    if(a>b){
        max=a;
        min=b;
    }
    else{
        max=b;
        min=a;
    }
    cout<<max<<endl;
    cout<<min<<endl;
    for(int i=min;i>0;i--){
        if(max%i==0 && min%i==0){
            cout<<"GCD="<<i;
            break;
        }
        else
        --min;
        
    }
    return 0;
}