#include <bits/stdc++.h>
using namespace std;

//A function to rearrange an array
void rearrange(int arr[], int n)
{
	int j = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] < 0) {
			if (i != j)
				swap(arr[i], arr[j]);
			j++;
		}
	}
}
//binary search

//linear search

//quick sort

//bubble sort

//merge sort

//heap sort

//radix sort

// Driver code
int main()
{
	return 0;
}
