// Given an array Arr of size N, print second largest distinct element from an array.

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