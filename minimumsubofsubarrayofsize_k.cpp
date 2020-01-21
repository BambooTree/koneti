// O(n) solution for finding minimum sum of 
// a subarray of size k 

//Input  : arr[] = {10,4,3,5,6,3,8,1}, size :3
//Output : Index 1 to 3 with sum as 12

#include <iostream> 
using namespace std; 

// Returns maximum sum in a subarray of size k. 
int minSum(int arr[], int n, int k) 
{ 
	// k must be greater 
	if (n < k) 
	{ 
	cout << "Invalid"; 
	return -1; 
	} 

	// Compute sum of first window of size k 
	int res = 0; 
	for (int i=0; i<k; i++) 
	res += arr[i]; 

	// Compute sums of remaining windows by 
	// removing first element of previous 
	// window and adding last element of 
	// current window. 
	int curr_sum = res; 
	for (int i=k; i<n; i++) 
	{ 
	curr_sum += arr[i] - arr[i-k]; 
	res = min(res, curr_sum); 
	} 

	return res; 
} 

// Driver code 
int main() 
{ 
	int arr[] = {10,4,3,5,6,3,8,1}; 
	int k = 3; 
	int n = sizeof(arr)/sizeof(arr[0]); 
	cout << minSum(arr, n, k); 
	return 0; 
} 
