/* Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.
Link : https://leetcode.com/problems/missing-number/  (LC-268 Missing Number)
*/

// Submitted on 01/01/2024

/*  Sort given vector then compare index to the element
    Time Complexity : O(nlogn)
    Space Complexity : O(1) */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size(), i;

        sort(nums.begin(), nums.end());
        
        for(i=0; i<n; i++)
        {
            if(i != nums[i])
                break;
        }
        return i;
    }
};