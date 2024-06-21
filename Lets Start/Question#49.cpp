// Code 01

// C++ program to implement Custom Vector
// class
#include "iostream"
#define ll long long
using namespace std;

// Template class to create vector of
// different data_type
template <typename DT>
class GenericMyVector {
private:
	DT* arr;

	// Variable to store the current capacity
	// of the vector
	ll capacity;

	// Variable to store the length of the
	// vector
	ll length;

public:
	explicit GenericMyVector(ll = 100);

	// Function that returns the number of
	// elements in array after pushing the data
	ll push_back(DT);

	// function that returns the popped element
	DT pop_back();

	// Function that return the size of vector
	ll size() const;
	DT& operator[](ll);

	// Iterator Class
	class iterator {
	private:
		// Dynamic array using pointers
		DT* ptr;

	public:
		explicit iterator()
			: ptr(nullptr)
		{
		}
		explicit iterator(DT* p)
			: ptr(p)
		{
		}
		bool operator==(const iterator& rhs) const
		{
			return ptr == rhs.ptr;
		}
		bool operator!=(const iterator& rhs) const
		{
			return !(*this == rhs);
		}
		DT operator*() const
		{
			return *ptr;
		}
		iterator& operator++()
		{
			++ptr;
			return *this;
		}
		iterator operator++(int)
		{
			iterator temp(*this);
			++*this;
			return temp;
		}
	};

	// Begin iterator
	iterator begin() const;

	// End iterator
	iterator end() const;
};

// Template class to return the size of
// vector of different data_type
template <typename DT>
GenericMyVector<DT>::GenericMyVector(ll n)
	: capacity(n), arr(new DT[n]), length(0)
{
}

// Template class to insert the element
// in vector
template <typename DT>
ll GenericMyVector<DT>::push_back(DT data)
{
	if (length == capacity) {
		DT* old = arr;
		arr = new DT[capacity = capacity * 2];
		copy(old, old + length, arr);
		delete[] old;
	}
	arr[length++] = data;
	return length;
}

// Template class to return the popped element
// in vector
template <typename DT>
DT GenericMyVector<DT>::pop_back()
{
	return arr[length-- - 1];
}

// Template class to return the size of
// vector
template <typename DT>
ll GenericMyVector<DT>::size() const
{
	return length;
}

// Template class to return the element of
// vector at given index
template <typename DT>
DT& GenericMyVector<DT>::operator[](ll index)
{
	// if given index is greater than the
	// size of vector print Error
	if (index >= length) {
		cout << "Error: Array index out of bound";
		exit(0);
	}

	// else return value at that index
	return *(arr + index);
}

// Template class to return begin iterator
template <typename DT>
typename GenericMyVector<DT>::iterator 
					GenericMyVector<DT>::begin() const
{
	return iterator(arr);
}

// Template class to return end iterator
template <typename DT>
typename GenericMyVector<DT>::iterator 
						GenericMyVector<DT>::end() const
{
	return iterator(arr + length);
}

// Template class to display element in
// vector
template <typename V>
void display_vector(V& v)
{
	// Declare iterator
	typename V::iterator ptr;
	for (ptr = v.begin(); ptr != v.end(); ptr++) {
		cout << *ptr << ' ';
	}
	cout << '\n';
}

// Driver code
int main()
{
	cout << "For Integer data_type" << endl;

	GenericMyVector<int> v;
	v.push_back(5);
	v.push_back(6);
	v.push_back(7);
	v.push_back(8);
	v.push_back(9);
	v.push_back(10);
	v.push_back(11);
	v.push_back(12);

	// Declare iterator for traversal in
	// vector v
	GenericMyVector<int>::iterator it;

	// Function called to display element in
	// vector in v
	cout << "Element in vector v : ";
	display_vector(v);

	// Print the size of vector v
	cout << "size: " << v.size() << endl;

	// Print Element at index 2
	cout << "v[2]: " << v[2] << '\n';

	// Pop an element and print it
	cout << "Popped Element: " << v.pop_back() << '\n';
	display_vector(v);

	cout << endl;

	cout << "For Char data_type" << endl;

	GenericMyVector<char> c;
	c.push_back('a');
	c.push_back('b');
	c.push_back('c');
	c.push_back('d');
	c.push_back('e');
	c.push_back('f');
	c.push_back('g');
	c.push_back('h');

	// Declare iterator for traversal in
	// vector c
	GenericMyVector<char>::iterator it1;

	// Function called to display element in
	// vector in c
	cout << "Element in vector c : ";
	display_vector(c);

	// Print the size of vector c
	cout << "size: " << c.size() << '\n';

	// Print Element at index 2
	cout << "c[2]: " << c[2] << '\n';

	// Pop an element and print it
	cout << "pop: " << c.pop_back() << '\n';

	// Function called to display element in
	// vector in c
	cout << "Element in vector c : ";
	display_vector(c);
	return 0;
}
