/**
 * @file 268.Missing-Number.cpp
 * @date 2022-11-06
 * @author Sion Han
 * @from https://leetcode.com/problems/missing-number/
 * @time-taken 20 min
 */

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int ans;
        
        sort(nums.begin(), nums.end());
        
        for (int i = 0; i < n; ++i) {
            if (nums[i] != i) {
                ans = i;
                break;
            }
        }
        return ans;
    }
};