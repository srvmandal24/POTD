/* A sequence a[0], a[1], …, a[N-1] is called decreasing if a[i] >= a[i+1] for each i: 0 <= i < N-1. You are given a sequence of numbers a[0], a[1],…, a[N-1] and a positive integer K. In each 'operation', you may subtract K from any element of the sequence. You are required to find the minimum number of 'operations' to make the given sequence decreasing.
Note: As the answer can be large return your answer modulo 109+7.
Link : https://www.geeksforgeeks.org/problems/decreasing-sequence2722/1  (GFG - Decreasing Sequence)
*/

// Submitted on 03/01/2024

/*  Time Complexity : O(n)
    Space Complexity : O(1) */

#include <bits/stdc++.h>
using namespace std;

int minMoves(int a[], int n, int k)
{
    long long no_of_operations = 0, total_operations = 0;
    long long mod = 1000000007;
    for(int i=0; i<n-1; i++)
    {
        if(a[i] < a[i+1])
        {
            long diff = a[i+1] - a[i];
            if(diff % k == 0)
            {
               no_of_operations = diff / k;
            }
            else
            {
                no_of_operations = diff / k+1;
            }
           
            total_operations += no_of_operations;
            a[i+1] -= no_of_operations * k;
        }
    }
    return total_operations % mod;
}