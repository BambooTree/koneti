// C++ recursive function to 
// solve tower of hanoi puzzle

/* 

Take an example for 2 disks :
Let rod 1 = 'A', rod 2 = 'B', rod 3 = 'C'.

Step 1 : Shift first disk from 'A' to 'B'.
Step 2 : Shift second disk from 'A' to 'C'.
Step 3 : Shift first disk from 'B' to 'C'.

The pattern here is :
Shift 'n-1' disks from 'A' to 'B'.
Shift last disk from 'A' to 'C'.
Shift 'n-1' disks from 'B' to 'C'.

*/
 
#include <bits/stdc++.h> 
using namespace std; 

void towerOfHanoi(int n, char from_rod, 
					char to_rod, char aux_rod) 
{ 
	if (n == 1) 
	{ 
		cout << "Move disk 1 from rod " << from_rod << 
							" to rod " << to_rod<<endl; 
		return; 
	} 
	towerOfHanoi(n - 1, from_rod, aux_rod, to_rod); 
	cout << "Move disk " << n << " from rod " << from_rod << 
								" to rod " << to_rod << endl; 
	towerOfHanoi(n - 1, aux_rod, to_rod, from_rod); 
} 

// Driver code 
int main() 
{ 
	int n = 4; // Number of disks 
	towerOfHanoi(n, 'A', 'C', 'B'); // A, B and C are names of rods 
	return 0; 
} 

// This is code is contributed by rathbhupendra 
