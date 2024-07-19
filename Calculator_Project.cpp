#include <iostream>
#include <functional>
#include <map>
#include <stdexcept>

using namespace std;
typedef function<double(double, double)> Operation;

// Addition operation
double add(double a, double b) {
    return a + b;
}

// Subtraction operation
double subtract(double a, double b) {
    return a - b;
}

// Multiplication operation
double multiply(double a, double b) {
    return a * b;
}

// Division operation
double divide(double a, double b) {
    if (b == 0) {
        throw invalid_argument("Division by zero is not allowed.");
    }
    return a / b;
}

int main() {
    // Map to store operations
    map<char, Operation> operations;
    operations['+'] = add;
    operations['-'] = subtract;
    operations['*'] = multiply;
    operations['/'] = divide;

    char operation;
    double num1, num2;

    cout << "Enter operation (+, -, *, /): ";
    cin >> operation;

    // Check if the operation is valid
    if (operations.find(operation) == operations.end()) {
        cerr << "Invalid operation!" << endl;
        return 1;
    }

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    try {
        double result = operations[operation](num1, num2);
        cout << "Result: " << result << endl;
    } catch (const invalid_argument& e) {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}
