//Define a structure Student with name, roll number, and marks, and print the details.
#include<iostream>
using namespace std;

struct Student {
    char name[50];
    int rollNo;
    float marks;
};

int main(){
    Student s;

    cout<<"Enter name: ";
    cin.getline(s.name, 50);
    cout<<"Enter roll number: ";
    cin>>s.rollNo;
    cout<<"Enter marks: ";
    cin>>s.marks;

    cout<<"--- Student Details ---"<<endl;
    cout<<"Name: " << s.name<<endl;
    cout<<"Roll Number: " << s.rollNo<<endl;
    cout<<"Marks: " << s.marks<<endl;

    return 0;
}