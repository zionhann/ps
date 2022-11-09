/**
 * @file 217.Contains-Duplicate.cpp
 * @date 2022-11-09
 * @author Sion Han
 * @from https://leetcode.com/problems/contains-duplicate/
 * @time-taken N/A
 * @related 
 */

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        for (int i = 0; i < nums.size()-1; ++i) {
            if (nums[i] == nums[i+1]) {
                return true;
            }
        }
        return false;
    }
};