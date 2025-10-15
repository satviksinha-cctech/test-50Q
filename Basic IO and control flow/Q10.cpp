//Check if a number is a palindrome.
#include<iostream>
using namespace std;
int main() {
    int num, reversed = 0, remainder;

    cout << "Enter an integer: ";
    cin >> num;

    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }
    if(num=reversed){
        cout<<"This is a palindrome";
    }
    else{
        cout<<"Not a palindrome";
    }
    return 0;
}