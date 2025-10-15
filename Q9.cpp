//Display all factors of a number.
#include <iostream>
using namespace std;

int main(){
    int A;
    cout<<"Enter an integer: ";
    cin>>A;
    for(int i=A;i>=1;i--){
        if(A%i==0){
            cout<<i<<endl;
        }
    }
    return 0;
}