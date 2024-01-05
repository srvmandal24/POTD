/* Given two strings s and t, return true if t is an anagram of s, and false otherwise.

An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.
Link : https://leetcode.com/problems/valid-anagram/  (LC-242 Valid Anagram)
*/

// Submitted on 05/01/2024


#include <bits/stdc++.h>
using namespace std;


/*  
    Time Complexity : O(n)
    Space Complexity : constant */


class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> h(26,0);
        bool result = true;
        int i, j;
        for(i=0; s[i] != '\0'; i++)
        {
            int val = s[i] - 97;
            h[val]++;
        }

        for(j=0; t[j] != '\0'; j++)
        {
            int val = t[j] - 97;
            if(h[val] == 0)
            {
                result = false;
                break;
            }
            h[val]--;
        }

        if(i != j)
            result = false;
        return result;
    }
};