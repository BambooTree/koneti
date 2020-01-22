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

bool subArraySum(int arr[], int n, int sum)  
{  
    int curr_sum =0, i, j;  
  
    // Pick a starting point  
    for (i = 0; i < n; i++)  
    {  
        curr_sum = arr[i];  
  
        // try all subarrays starting with 'i'  
        for (j = i + 1; j <= n; j++)  
        {  
            if (curr_sum == sum)  
            {  
                return true;  
            }  
           
        curr_sum = curr_sum + arr[j];  
        }  
    }  
  

    return false;  
}

bool subArrayExists(int arr[], int n) 
{ 
	unordered_set<int> sumSet; 

	// Traverse through array and store prefix sums 
	int sum = 0; 
	for (int i = 0 ; i < n ; i++) 
	{ 
		sum += arr[i]; 

		// If prefix sum is 0 or it is already present
		unordered_set<int> :: iterator itr = sumSet.find(sum); 
		if (sum == 0 || itr != sumSet.end()) 
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
	if (subArraySum(arr, n, 0)) 
		cout << "Found a subarray with 0 sum"<<endl; 
	else
		cout << "No Such Sub Array Exists!"<<endl;; 
	return 0; 
} 
