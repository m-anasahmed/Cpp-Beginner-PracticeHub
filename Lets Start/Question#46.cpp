// Code 01
#include <bits/stdc++.h> 
using namespace std; 

// Function to print the set 
void printSet(set<int> my_set) 
{ 

	// Print the set 
	cout << "Set: "; 
	for (auto i : my_set) 
		cout << i << " "; 

	cout << '\n'; 
} 

// Function to find the maximum element 
int findMax(set<int> my_set) 
{ 

	// Get the maximum element 
	int max_element; 
	if (!my_set.empty()) 
		max_element = *(my_set.rbegin()); 

	// return the maximum element 
	return max_element; 
} 

// Function to find the minimum element 
int findMin(set<int> my_set) 
{ 

	// Get the minimum element 
	int min_element; 
	if (!my_set.empty()) 
		min_element = *my_set.begin(); 

	// return the minimum element 
	return min_element; 
} 

int main() 
{ 

	// Get the set 
	set<int> my_set; 

	// Add the elements in the set 
	my_set.insert(1); 
	my_set.insert(6); 
	my_set.insert(15); 
	my_set.insert(10); 
	my_set.insert(5); 

	// Print the set 
	printSet(my_set); 

	// Get the minimum element 
	cout << "Minimum element: "
		<< findMin(my_set) 
		<< endl; 

	// Get the maximum element 
	cout << "Maximum element: "
		<< findMax(my_set) 
		<< endl; 
} 
