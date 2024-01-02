/* Given two arrays a[] and b[] of size n and m respectively. The task is to find the number of elements in the union between these two arrays.
Link : https://www.geeksforgeeks.org/problems/union-of-two-arrays3538/1  (GFG-Union of two arrays)
*/

// Submitted on 02/01/2024

/*  Store each element of both arrays in a set and then return the size of set.
    Time Complexity : O(n+m)
    Space Complexity : O(n+m) */

#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {

        set <int> s;
        for(int i=0; i<n; i++)
            s.insert(a[i]);
        for(int i=0; i<m; i++)
            s.insert(b[i]);

        int num_of_elements = s.size();
        return num_of_elements;
    }
};