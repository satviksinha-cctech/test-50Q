//Copy one string into another using pointers.
#include<iostream>
using namespace std;

int main(){
    char source[100], destination[100];
    
    cout << "Enter a string: ";
    cin.getline(source, 100);

    char *srcPtr = source;
    char *destPtr = destination;

    while (*srcPtr != '\0') {
        *destPtr = *srcPtr;  
        srcPtr++;             
        destPtr++;           
    }
    *destPtr = '\0';  
    cout << "Copied string: " << destination << endl;

    return 0;
}