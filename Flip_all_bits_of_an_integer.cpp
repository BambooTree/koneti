// C++ program to invert actual bits 
// of a number. 

/*
Input : 11
Output : 4
(11)10 = (1011)2
After inverting the bits, we get:
(0100)2 = (4)10.

Input : 20
Output : 11
(20)10 = (10100)2.
After inverting the bits, we get:
(01011)2 = (11)10.

*/
#include <bits/stdc++.h> 

using namespace std; 

// Function to invert bits of a number 
int invertBits(int n) 
{ 
	// Calculate number of bits of N-1; 
	int x = log2(n) ; 

	int m = 1 << x; 

	m = m | m - 1; 

	n = n ^ m; 

	return n; 
} 

// Driver code 
int main() 
{ 
	int n = 20; 

	cout << invertBits(n); 

	return 0; 
} 
