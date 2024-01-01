// Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.

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