//Implement a class Calculator with functions for addition, subtraction, multiplication, and division.
#include <iostream>
using namespace std;

class Calculator{
    public:
    double num1, num2;
    
    void getNumbers(){
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;
    }

    double add(){
        return num1 + num2;
    }

    double subtract(){
        return num1 - num2;
    }

    double multiply(){
        return num1 * num2;
    }

    double divide(){
        if (num2 != 0)
            return num1 / num2;
        else {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
    }
    void displayResults(){
        cout << "\n--- Calculator Results ---" << endl;
        cout << "Addition: " << add() << endl;
        cout << "Subtraction: " << subtract() << endl;
        cout << "Multiplication: " << multiply() << endl;
        cout << "Division: " << divide() << endl;
    }
};

int main(){
    Calculator calc;
    calc.getNumbers();
    calc.displayResults();
    return 0;
}
