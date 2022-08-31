/**
 * @file 1480.Running-Sum-of-1d-Array.cpp
 * @date 2022-08-31
 * @author Sion Han
 * @time-taken: 6min
 * @related-topics: Array
 */

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ans(nums);
        
        for (int i = 1; i < nums.size(); ++i) {
            ans[i] = ans[i-1] + ans[i];
        }
        return ans;
    }
};