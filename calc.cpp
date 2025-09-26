#include<iostream>
#include<string>
using namespace std;

float add(float a, float b) {   //add function
    return a + b;
}

float sub(float a, float b) {   //sub function
    return a - b;
}

float mul(float a, float b) {   //multiplication function
    return a * b;
}   

float div(float a, float b) {   //division function
    if (b == 0) {
        cout << "Error: Division by zero!" << endl;
        return 0; // Return a default value
    } else {
        return a / b;
    }
}

int main() {
    int choice;             //variable declaration
    float num1, num2;       //variable declaration
    
    while (true) {
        cout << "\nSelect operation:\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";             //choice pool
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Exit\n";
        cout << "Enter choice (1-5): ";
        cin >> choice;

        if (choice == 5) {
            cout << "Exiting calculator. Goodbye!\n";       //check for exit
            break;  // Exiting the loop
        }

        cout << "Enter two numbers: ";
        cin >> num1 >> num2;

        switch (choice) {
            case 1:
                cout << "Result: " << add(num1, num2) << endl;  //function calls
                break;
            case 2:
                cout << "Result: " << sub(num1, num2) << endl;  //function calls
                break;
            case 3:
                cout << "Result: " << mul(num1, num2) << endl;  //function calls
                break;
            case 4:
                cout << "Result: " << div(num1, num2) << endl;  //function calls
                break;
            default:
                cout << "Invalid choice! Please enter a number from 1 to 5." << endl;
        }
    }

    return 0;
}
