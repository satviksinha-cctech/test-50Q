//Read three numbers and print the largest
#include<iostream>
using namespace std;

int main(){
    int A,B,C;
    cout<<"Enter the three numbers: "<<endl;
    cin>>A>>B>>C;
    if(A>B&&C){
        cout<<"Largest number is "<<A<<endl;
    }
    else if(B>A&&C){
        cout<<"Largest number is "<<B<<endl;
    }
    else{
        cout<<"Largest number is "<<C<<endl;
    }
    return 0;

}