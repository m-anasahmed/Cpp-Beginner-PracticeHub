// Code 01
// Program to illustrate how to swap two 
// variables using a function in C++ 
#include <iostream> 
using namespace std; 

// function to swap two variables 
void swap(int* a, int* b) 
{ 
	int temp = *a; 
	*a = *b; 
	*b = temp; 
} 

// driver code 
int main() 
{ 
	int a = 10; 
	int b = 22; 

	cout << "Before Swapping: " << endl; 
	cout << " a: " << a << " b: " << b << endl; 

	// calling swap 
	swap(&a, &b); 

	cout << "After Swapping: " << endl; 
	cout << " a: " << a << " b: " << b << endl; 

	return 0; 
}
