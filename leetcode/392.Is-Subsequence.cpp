/**
 * @file 392.Is-Subsequence.cpp
 * @date 2022-10-03
 * @author Sion Han
 * @from https://leetcode.com/problems/is-subsequence/
 * @time-taken 15 min
 * @related Two Pointers, String, Dynamic Programming
 */

class Solution {
public:
    bool isSubsequence(string s, string t) {
        auto sp = s.begin();
        
        for (char c : t) {
            if (c == *sp) {
                sp += 1;
            }
        }
        return sp == s.end();
    }
};