// A C++ program to find if there is a zero sum 
// subarray 
/*
Input: {4, 2, -3, 1, 6}
Output: true 
There is a subarray with zero sum from index 1 to 3.

Input: {4, 2, 0, 1, 6}
Output: true 
There is a subarray with zero sum from index 2 to 2.

Input: {-3, 2, 3, 1, 6}
Output: false
There is no subarray with zero sum.

*/
#include <bits/stdc++.h> 
using namespace std; 

bool subArrayExists(int arr[], int n) 
{ 
	unordered_set<int> sumSet; 

	// Traverse through array and store prefix sums 
	int sum = 0; 
	for (int i = 0 ; i < n ; i++) 
	{ 
		sum += arr[i]; 

		// If prefix sum is 0 or it is already present 
		if (sum == 0 || sumSet.find(sum) != sumSet.end()) 
			return true; 

		sumSet.insert(sum); 
	} 
	return false; 
} 

// Driver code 
int main() 
{ 
	int arr[] = {4,2,-3,1,6}; 
	int n = sizeof(arr)/sizeof(arr[0]); 
	if (subArrayExists(arr, n)) 
		cout << "Found a subarray with 0 sum"; 
	else
		cout << "No Such Sub Array Exists!"; 
	return 0; 
} 
