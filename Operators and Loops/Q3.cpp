//Find the least common multiple (LCM) of two numbers.
#include <iostream>
using namespace std;

int main() {
    int max, A, B, LCM;
    cout<<"Enter first integer: ";
    cin>>A;
    cout<<"Enter second integer: ";
    cin>>B;
    
    if(A>B) {
        cout<<"Max: "<<A<<endl;
        max=A;
    }
    else {
        cout<<"Max: "<<B<<endl;
        max=B;
    }
    while(true) {
                
    
    if (max%A==0 && max%B==0){
        cout<<"LCM is: "<<max;
        break;
    }
    else {
        ++max;
    }
    }
    return 0;
}