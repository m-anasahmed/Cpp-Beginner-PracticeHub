// Code 01
// Program to create simple calculator
// using switch statement
#include <iostream>
using namespace std;

int main()
{
	char op;
	float num1, num2;
	
	cout << "Enter the number; num1 and num2 : ";
	cin >> num1 >> num2;
	cout << "Enter the operator (+, -, *, /) : ";  
	cin >> op;
	// Switch statement
	switch (op) {
	// If user enter +
	case '+':
		cout << "Addition : " << num1 + num2;
		break;
	// If user enter -
	case '-':
		cout << "Substraction : " << num1 - num2;
		break;
	// If user enter *
	case '*':
		cout << "Multiplication : " << num1 * num2;
		break;
	// If user enter /
	case '/':
		cout << "Division : " << num1 / num2;
		break;
	// If the operator is other than +, -, * or /,
	// error message will display
	default:
		cout << "Error! operator is not correct";
	}
	// switch statement ends
	return 0;
}

//--------------------------------------------------------------------------------------------------------

// Code 02
#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char operation;

    // Getting input from the user
    cout << "Enter two numbers separated by space: ";
    cin >> num1 >> num2;

    // Getting the operation from the user
    cout << "Enter 'a' for addition, 's' for subtraction, 'm' for multiplication, 'd' for division: ";
    cin >> operation;

    // Performing the operation based on user input
    switch (operation) {
        case 'a':
            cout << "Result: " << num1 + num2 << endl;
            break;
        case 's':
            cout << "Result: " << num1 - num2 << endl;
            break;
        case 'm':
            cout << "Result: " << num1 * num2 << endl;
            break;
        case 'd':
            if (num2 != 0) {
                cout << "Result: " << num1 / num2 << endl;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            break;
        default:
            cout << "Error: Invalid operation entered." << endl;
            break;
    }

    return 0;
}

// X===============================X===============================X=============================x
