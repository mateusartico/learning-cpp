#include <iostream>
using namespace std;

int main() {
	// Arithmetic
	int x = 10;
	int y = 9;
	
	int sum = x + y; // 19
	int sub = x - y; // 1
	int mult = x * y; // 90
	int div = x / y; // 0
	int mod = x % y; // 1
	x++; // Increase 1 to x
	y--; // Decrease 1 to y

	// Assignment
	int a = 10; // Assignment operator =
	a += 2; // Addition operator +
	a -= 3; // Subtraction operator -
	a *= 2; // Multiplication operator *
	a /= 2; // Division operator /
	a %= 5; // Modulo operator %
	a &= 11; // Bitwise AND
	a ^= 5;	// Bitwise XOR
	a |= 3; // Bitwise OR
	a <<= 2; // Left shift
	a >>= 1; // Right shift
	
	// Comparison
	int j = 10;
	int i = 8;
	cout << (j > i) << endl; // Greater than
	cout << (j < i) << endl; // Less than
	cout << (j == i) << endl; // Equal to
	cout << (j >= i) << endl; // Greater than or equal to
	cout << (j <= i) << endl; // Less than or equal to
	cout << (j != i) << endl; // Not equal
	
	// Logical
	int l = 4;
	int m = 3;
	int n = 5;
	cout << (m > l && n == m) << endl; // Logical and
	cout << (m < l || n == l) << endl; // Logical or
	cout << !(m < l) << endl; // Logical not

	return 0;
}
