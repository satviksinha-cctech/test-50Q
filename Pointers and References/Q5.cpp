//Count vowels in a string using pointers.
#include<iostream>
using namespace std;

int main(){
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);

    char *ptr = str;
    int vowelCount = 0;

    while(*ptr != '\0'){
        char ch = *ptr;
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vowelCount++;
        }

        ptr++;
    }

    cout<<"Number of vowels: "<<vowelCount<<endl;

    return 0;
}