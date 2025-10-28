//Create a class Rectangle with functions to calculate area and perimeter.
#include<iostream>
using namespace std;

class Rectangle{
    public:
    float length;
    float breadth;
    void getDimensions(){
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter breadth: ";
        cin >> breadth;
    }
    float area(){
        return length * breadth;
    }
    float perimeter(){
        return 2 * (length + breadth);
    }
    void display(){
        cout << "Length: " << length << endl;
        cout << "Breadth: " << breadth << endl;
        cout << "Area: " << area() << endl;
        cout << "Perimeter: " << perimeter() << endl;
    }
};
int main(){
    Rectangle r;     
    r.getDimensions();  
    r.display();       
    return 0;
}

