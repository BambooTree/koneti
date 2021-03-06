// A O(n) program to sort an input array in wave form 

/*
Given an unsorted array of integers, sort the array into a wave like array. 
An array ‘arr[0..n-1]’ is sorted in wave form if arr[0] >= arr[1] <= arr[2] >= arr[3] <= arr[4] >= …..
Examples:

 Input:  arr[] = {10, 5, 6, 3, 2, 20, 100, 80}
 Output: arr[] = {10, 5, 6, 2, 20, 3, 100, 80} OR
                 {20, 5, 10, 2, 80, 6, 100, 3} OR
                 any other array that is in wave form

 Input:  arr[] = {20, 10, 8, 6, 4, 2}
 Output: arr[] = {20, 8, 10, 4, 6, 2} OR
                 {10, 8, 20, 2, 6, 4} OR
                 any other array that is in wave form

 Input:  arr[] = {2, 4, 6, 8, 10, 20}
 Output: arr[] = {4, 2, 8, 6, 20, 10} OR
                 any other array that is in wave form

 Input:  arr[] = {3, 6, 5, 10, 7, 20}
 Output: arr[] = {6, 3, 10, 5, 20, 7} OR
                 any other array that is in wave form

 Input arr[] =  {10, 90, 49, 2, 1, 5, 23};
 Output arr[] = {90 ,10 ,49 ,1 ,5 ,2 ,23 }; Or any other array that is in wave form

                 */

#include<iostream> 
#include <vector>
using namespace std; 

// A utility method to swap two numbers. 
void swap(int& x, int& y) 
{ 
	int temp = x; 
	x = y; 
	y = temp; 
} 

// This function sorts arr[0..n-1] in wave form, i.e., arr[0] >= 
// arr[1] <= arr[2] >= arr[3] <= arr[4] >= arr[5] .... 
void sortInWave(vector<int> &arr, int n) 
{ 
	// Traverse all even elements 
	for (int i = 0; i < n; i++) 
	{ 
		// If Index is even , and if current element is not lesser than next element then swap
		if (i%2)
		{
			if(!(arr[i]<arr[i+1]))
			swap(arr[i], arr[i+1]); 
		}
		else
		{
			// If Index is odd, and if current element is not greater than next element then swap
			if(!(arr[i]>arr[i+1]))
			swap(arr[i], arr[i+1]); 
		}

	
	} 
} 

void printvector(vector<int>vt)
{
	for (int i =0 ;i<vt.size();i++)
		cout<<vt[i]<<" "<<"\t";
}
// Driver program to test above function 
int main() 
{ 
	vector<int>arr {10, 90, 49, 2, 1, 5, 23}; 
	int n = arr.size(); 
    cout << " Before Spiral form"<<endl;
    printvector(arr);

	sortInWave(arr, n); 
	 cout << " After Spiral form"<<endl;
   printvector(arr);
 
	return 0; 
} 
