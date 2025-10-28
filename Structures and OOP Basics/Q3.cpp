//Create a class Circle that takes radius and returns area.
#include<iostream>
using namespace std;

class Circle{
    public:
    float radius;
    void getDimensions(){
        cout<<"Enter radius:";
        cin>>radius;
    }
    float area(){
        return 3.14*radius*radius;
    }
    void display(){
        cout<<"Radius: "<<radius<<endl;
        cout<<"Area: "<<area()<<endl;
    }
};
int main(){
    Circle c;
    c.getDimensions();
    c.display();
    return 0;
}