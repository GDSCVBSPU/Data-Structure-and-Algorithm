/*
Given a sorted array of distinct integers and a target value, return the index if the target is
found. If not, return the index where it would be if it were inserted in order
*/

#include <bits/stdc++.h>
using namespace std;

// Function to find insert position of K
int find_index(int arr[], int n, int K)
{
	// Traverse the array
	for (int i = 0; i < n; i++)
		// If K is found
		if (arr[i] == K)
			return i;
		// If current array element exceeds K
		else if (arr[i] > K)
			return i;
	// If all elements are smaller than K
	return n;
}

// Driver Code
int main()
{
    int n;
    cout<<"enter the no. of elements :";
    cin>>n;
	
    int arr[n];
	n = sizeof(arr) / sizeof(arr[0]);
    cout<<"Enter the elements: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int K;
    cout<<"Enter the target value: ";
    cin>>K;
	
	cout <<"The index to be inserted: "<< find_index(arr, n, K) << endl;
	return 0;
}


