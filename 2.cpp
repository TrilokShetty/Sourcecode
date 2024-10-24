// C++ implementation for the above approach
#include <bits/stdc++.h>
using namespace std;

// Function to find the maximum alternating
// sum of a subarray for the given array
int alternatingSum(int arr[],int n)
{
int sum = 0;
int sumSoFar = 0;

// Traverse the array
for (int i = 0; i < n; i++) {

	// Store sum of subarrays
	// starting at even indices
	if (i % 2 == 1) {

	sumSoFar -= arr[i];
	}
	else {

	sumSoFar = max(
		sumSoFar + arr[i], arr[i]);
	}

	// Update sum
	sum = max(sum, sumSoFar);
}

sumSoFar = 0;

// Traverse the array
for (int i = 1; i < n; i++) {

	// Store sum of subarrays
	// starting at odd indices
	if (i % 2 == 0) {
	sumSoFar -= arr[i];
	}
	else {
	sumSoFar = max(
		sumSoFar + arr[i], arr[i]);
	}

	// Update sum
	sum = max(sum, sumSoFar);
}
return sum;
}

// Driver code
int main() 
{

// Given Input
int arr[] ={ -4, -10, 3, 5 };
int n = sizeof(arr)/sizeof(arr[0]);

// Function call
int ans = alternatingSum(arr,n);

cout<<ans<<endl;
return 0;
}

// This code is contributed by Potta Lokesh
