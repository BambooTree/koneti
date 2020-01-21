

// Find duplicates in O(n) time and O(1)extra space
// Input : 1,2,3,1,3,6,6
//o/p : 1,3,6
 /*
 abs is absolute value => prints the positive value
  a = abs(5);
   printf("value of a = %d\n", a);

   b = abs(-10);
   printf("value of b = %d\n", b);
*/
#include <bits/stdc++.h>
using namespace std;
void printDuplicates2(int arr[], int n) 
{ 
    int i; 
  
    // Flag variable used to 
    // represent whether repeating 
    // element is found or not. 
    int fl = 0; 
  
    for (i = 0; i < n; i++)
     { 
  
        // Check if current element is 
        // repeating or not. If it is 
        // repeating then value will 
        // be greater than or equal to n. 
        if (arr[arr[i] % n] >= n) 
        { 
  
            // Check if it is first 
            // repetition or not. If it is 
            // first repetition then value 
            // at index arr[i] is less than 
            // 2*n. Print arr[i] if it is 
            // first repetition. 
            if (arr[arr[i] % n] < 2 * n) 
            { 
                cout << arr[i] % n << " "; 
                fl = 1; 
            } 
        } 
  
        // Add n to index arr[i] to mark 
        // presence of arr[i] or to 
        // mark repetition of arr[i]. 
        arr[arr[i] % n] += n; 
    } 
  
    // If flag variable is not set 
    // then no repeating element is 
    // found. So print -1. 
    if (!fl) 
        cout << "-1"; 
} 

void PrintRepeating(int arr[],int size)
{
	int i;
	cout << " the Repeating elements are"<<endl;
	for (i =0; i<size;i++)
	{
	//   cout << abs(arr[i]) << " "; 
	 //   cout << arr[abs(arr[i])] << " "; 

	   if(arr[abs(arr[i])] >= 0)
	      arr[abs(arr[i])] = - arr[abs(arr[i])];
	   else
	    cout << abs(arr[i]) << " ";  
	}
}

int main()
{
	int arr[] = {1,2,3,1,3,6,6};
	int arr_size = sizeof(arr)/sizeof(arr[0]);
	PrintRepeating(arr,arr_size);
	printDuplicates2(arr,arr_size);
	return 0;
}