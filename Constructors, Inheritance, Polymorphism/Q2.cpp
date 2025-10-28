//Implement a base class Shape and derived classes Circle and Rectangle to compute areas.
#include<iostream>
using namespace std;

class Shape{
    public:
    virtual float area() {
        return 0;
    }
};
class Circle:public Shape{
private:
    float radius;

public:
    Circle(float r){
        radius = r;
    }
    float area()override{
        return 3.14159 * radius * radius;
    }
};

class Rectangle:public Shape{
        public:
        float length;
        float breadth;
        Rectangle(float l, float b) {
        length = l;
        breadth = b;
    }
    float area() override {
        return length * breadth;
    }
};
int main(){
    float r, l, b;

    cout<<"Enter radius of circle: ";
    cin>>r;
    Circle c(r);

    cout<<"Enter length and breadth of rectangle: ";
    cin >>l>>b;
    Rectangle rect(l, b);

    cout<<"Circle area: "<<c.area()<<endl;
    cout<<"Rectangle area: "<<rect.area()<<endl;

    return 0;
}
