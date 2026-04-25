#include <bits/stdc++.h>
using namespace std;

// Functions
double add(double a, double b) { return a + b; }
double subtract(double a, double b) { return a - b; }
double multiply(double a, double b) { return a * b; }

double divide(double a, double b) {
    if (b == 0) {
        cout << "Error: Division by zero!\n";
        return 0;
    }
    return a / b;
}

double power(double a, double b) {
    return pow(a, b);
}

double square(double a) {
    return a * a;
}

// FIXED: renamed from modulus → mod
int mod(int a, int b) {
    if (b == 0) {
        cout << "Error: Modulus by zero!\n";
        return 0;
    }
    return a % b;
}

// Input validation
void clearInput() {
    cin.clear();
    cin.ignore(1000, '\n');
}

int main() {
    int choice;
    double num1, num2;
    char again;

    do {
        cout << "\n===== SHUBH CALCI=====\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Power (x^y)\n";
        cout << "6. Square (x^2)\n";
        cout << "7. Modulus (%)\n";
        cout << "8. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        if (cin.fail()) {
            cout << "Invalid input!\n";
            clearInput();
            continue;
        }

        switch (choice) {
            case 1:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Result: " << add(num1, num2) << endl;
                break;

            case 2:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Result: " << subtract(num1, num2) << endl;
                break;

            case 3:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Result: " << multiply(num1, num2) << endl;
                break;

            case 4:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Result: " << divide(num1, num2) << endl;
                break;

            case 5:
                cout << "Enter base and exponent: ";
                cin >> num1 >> num2;
                cout << "Result: " << power(num1, num2) << endl;
                break;

            case 6:
                cout << "Enter number: ";
                cin >> num1;
                cout << "Result: " << square(num1) << endl;
                break;

            case 7: {
                int a, b;
                cout << "Enter two integers: ";
                cin >> a >> b;
                cout << "Result: " << mod(a, b) << endl;
                break;
            }

            case 8:
                cout << "Exiting calculator...\n";
                return 0;

            default:
                cout << "Invalid choice!\n";
        }

        cout << "Do you want to continue? (y/n): ";
        cin >> again;

    } while (again == 'y' || again == 'Y');

    return 0;
}