#include <iostream>
using namespace std;

void choice(float &a, float &b) {
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
}

void menu() {
    cout << "ARTHEMETIC CALCULATOR \n";
    cout << "1. ADDITION\n";
    cout << "2. SUBTRACTION \n";
    cout << "3. MULTIPLICATION \n";
    cout << "4. DIVISION \n";
    cout << "5. EXIT \n";
    cout << "Enter your choice: ";
}

int add(float a, float b) {
    cout << "ADDITION\n";
    cout << a << "+" << b << "=" << (a + b) << endl;
    return 0;
}

int sub(float a, float b) {
    cout << "SUBTRACTION\n";
    cout << a << "-" << b << "=" << (a - b) << endl;
    return 0;
}

int multiply(float a, float b) {
    cout << "MULTIPLICATION\n";
    cout << a << "*" << b << "=" << (a * b) << endl;
    return 0;
}

int divide(float a, float b) {
    if (b != 0) {
        cout << "DIVISION\n";
        cout << a << "/" << b << "=" << (a / b) << endl;
    } else {
        cout << "Error: Division by zero!" << endl;
    }
    return 0;
}

int main() {
    float a, b;
    int c;
    while (true) {
        menu();
        cin >> c;
        choice(a, b);
        switch (c) {
            case 1:
                add(a, b);
                break;
            case 2:
                sub(a, b);
                break;
            case 3:
                multiply(a, b);
                break;
            case 4:
                divide(a, b);
                break;
            case 5:
                cout << "Exiting Arithmetic calculator\n";
                return 0;
            default:
                cout << "Invalid choice \n";
        }
    }
}
