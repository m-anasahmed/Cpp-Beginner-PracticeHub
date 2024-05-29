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

// X===============================X===============================X=============================x
