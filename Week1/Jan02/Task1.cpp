/* Given an array of integers nums, return the number of good pairs.
A pair (i, j) is called good if nums[i] == nums[j] and i < j.
Link : https://leetcode.com/problems/number-of-good-pairs/  (LC-1512 Number of Good Pairs)
*/

// Submitted on 02/01/2024


#include <bits/stdc++.h>
using namespace std;

/*  Brute Force Approach
    Time Complexity : O(n^2)
    Space Complexity : O(1) */

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        
        int count=0;
        for(int i=0; i<nums.size(); i++)
        {
            for(int j=i+1; j<nums.size(); j++)
            {
                if(nums[i]==nums[j])
                    count++;
            }
        }
        return count;
    }
};


/*  Sort the vector and then count the number of occurence of each element and find the number of combinations mathematically
    Time Complexity : O(nlogn)
    Space Complexity : O(1) */


class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {

        sort(nums.begin(), nums.end());
        int n = nums.size(), total_count = 0, same_nums = 1;
        for(int i=0; i<n; i++)
        {
            if((i < n-1) && (nums[i] == nums[i+1]))
            {
                same_nums++;
            }
            else
            {
                total_count += ((same_nums*(same_nums-1))/2);
                same_nums = 1;
            }
        }
        return total_count;
    }
};