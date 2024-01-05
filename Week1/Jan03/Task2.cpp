/* Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.
Link : https://leetcode.com/problems/majority-element/  (LC-169 Majority Element)
*/

// Submitted on 03/01/2024


#include <bits/stdc++.h>
using namespace std;

/*  Sort the vector and then return middle element
    Time Complexity : O(nlogn)
    Space Complexity : O(1) */

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n=nums.size();
        return nums[n/2];
    }
};


/*  Return the element that has occured more than n/2 times
    Time Complexity : O(n)
    Space Complexity : O(n) */


class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        unordered_map <int,int> m;
        int result;
        for(int i=0;i<n;i++)
        {
            m[nums[i]]++;
        }
        for(int i=0;i<n;i++)
        {
            if(m[nums[i]]>n/2)
            {
                result = nums[i];
            }
        }
        return result;
    }
};