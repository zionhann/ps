/**
 * @file 724. Find-Pivot-Index.cpp
 * @from https://leetcode.com/problems/find-pivot-index/
 * @date 2022-08-31
 * @author Sion Han
 * @time-taken: 19min
 * @related-topics: Array 
 */

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        for (auto iter = nums.begin(); iter != nums.end(); ++iter) {
            int lsum = accumulate(nums.begin(), iter, 0);
            int rsum = accumulate(next(iter), nums.end(), 0);
            
            if (lsum == rsum) {
                return iter - nums.begin();
            }
        }
        return -1;
    }
};