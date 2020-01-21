// C++ program to swap three variables 
// without using temporary variable. 

/* 

Input  : a = 10, b = 20 and c = 30
Output : a = 30, b = 10 and c = 20

*/

#include <iostream> 
using namespace std; 


// Assign c's value to a, a's value to b and 
// b's value to c. 
void swapThree2(int &a, int &b, int &c) 
{ 
    // Store XOR of all in a 
    a = a ^ b ^ c; 
  
    // After this, b has value of a 
    b = a ^ b ^ c; 
  
    // After this, c has value of b 
    c = a ^ b ^ c; 
  
    // After this, a has value of c 
    a = a ^ b ^ c; 
}

void swapThree(int &a, int &b, int &c) 
{ 
	// Store sum of all in a 
	a = a + b + c; // (a = 60) 

	// After this, b has value of a 
	b = a - (b+c); // (b = 60 – (20+30) =10) 

	// After this, c has value of b 
	c = a - (b+c); // (c = 60 – (10 + 30) = 20) 

	// After this, a has value of c 
	a = a - (b+c); //(a = 60 – (10 + 20) = 30) 
} 

// Driver code 
int main() 
{ 
	int a = 10, b = 20, c = 30; 

	cout << "Before swapping a = " << a << ", b = "
		<< b << ", c = " << c << endl; 

	swapThree(a, b, c); 
	swapThree2(a,b,c);

	cout << "After swapping a = " << a << ", b = "
		<< b << ", c = " << c << endl; 

	return 0; 
} 
