/* Given an array Arr of size N, print second largest distinct element from an array.
Link : https://practice.geeksforgeeks.org/problems/second-largest3735/1  (GFG-Second Largest)
*/

// Submitted on 01/01/2024

/*  Time Complexity : O(n)
    Space Complexity : O(1) */

#include <bits/stdc++.h>
using namespace std;

class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    int largest = -1, sLargest = -1;
	    for(int i=0; i<n; i++)
	    {
	        if(arr[i] > largest)
	        {
	            sLargest = largest;
	            largest = arr[i];
	        }
	        else if(arr[i] > sLargest && arr[i] != largest)
	            sLargest = arr[i];
	    }
	    return sLargest;
	}
};