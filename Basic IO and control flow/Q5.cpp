//Print the multiplication table of a given number.
#include<iostream>
using namespace std;

int main(){
    int A, table;
    cout<<"Enter an integer: ";
    cin>>A;
    for(int i=1;i<=10;i++){
        table=i*A;
    cout<<table<<endl;
    }
    
    return 0;
}