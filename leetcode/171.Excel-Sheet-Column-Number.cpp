/**
 * @file 171.Excel-Sheet-Column-Number.cpp
 * @date 2022-11-08
 * @author Sion Han
 * @from https://leetcode.com/problems/excel-sheet-column-number/
 * @time-taken N/A
 */

class Solution {
public:
    int titleToNumber(string columnTitle) {
        const int offset = 64;
        const int len = columnTitle.size();
        int i = len;
        int ans = 0;
        
        while (i--) {
            int val = pow(26, i) * (columnTitle[len-i-1] - offset);
            ans += val;
        }
        return ans;
    }
};