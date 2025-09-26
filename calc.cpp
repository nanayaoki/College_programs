#include<iostream>
#include<string>
using namespace std;

float add(float a, float b) {
    return a + b;
}

float sub(float a, float b) {
    return a - b;
}

float mul(float a, float b) {
    return a * b;
}   

float div(float a, float b) {
    if (b == 0) {
        cout << "Error: Division by zero!" << endl;
    } 
    else{
        return a/b;
    }
}

int main() {
    int choice;
    float num1, num2;

    cout << "Select operation:\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "Enter choice (1-4): ";
    cin >> choice;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    switch (choice) {
        case 1:
            cout << "Result: " << add(num1, num2) << endl;
            break;
        case 2:
            cout << "Result: " << sub(num1, num2) << endl;
            break;
        case 3:
            cout << "Result: " << mul(num1, num2) << endl;
            break;
        case 4:
            cout << "Result: " << div(num1, num2) << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}

