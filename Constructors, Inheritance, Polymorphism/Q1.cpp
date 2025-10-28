//Create a class Complex with a constructor and function to add two complex numbers.
#include<iostream>
using namespace std;

class Complex{
    public:
    float real;
    float imag;
    Complex(float r=0, float i=0){
        real=r;
        imag=i;
    }
    Complex addComplex(Complex c){   
        Complex result;
        result.real = real + c.real;
        result.imag = imag + c.imag;
        return result;
    }
    void display() {
        cout<<real<<" + "<<"i"<<imag<<endl;
    }
};
int main(){
    float r1, i1, r2, i2;

    cout << "Enter real and imaginary parts of first complex number: ";
    cin >> r1 >> i1;

    cout << "Enter real and imaginary parts of second complex number: ";
    cin >> r2 >> i2;

    Complex c1(r1, i1);  
    Complex c2(r2, i2);   
    Complex sum = c1.addComplex(c2);  
    cout << "Sum of complex numbers = ";
    sum.display();
    return 0;
}