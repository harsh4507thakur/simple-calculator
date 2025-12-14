#include <iostream>
using namespace std;

float calculate(float a, float b, int choice) {
    switch (choice) {
        case 1:
            return a + b;
        case 2:
            return a - b;
        case 3:
            return a * b;
        case 4:
            if (b == 0) {
                throw "Divide by zero is not allowed";
            }
            return a / b;
        default:
            throw "Invalid operation selected";
    }
}

int main() {
    float a, b;
    int choice;

    while (true) {
        cout << "Enter first operand: ";
        cin >> a;

        cout << "Enter second operand: ";
        cin >> b;

        cout << "\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 0) {
            cout << "Exiting calculator...\n";
            break;
        }

        try {
            float result = calculate(a, b, choice);
            cout << "Result: " << result << "\n\n";
        }
        catch (const char* msg) {
            cout << "Error: " << msg << "\n\n";
        }
    }

    return 0;
}
