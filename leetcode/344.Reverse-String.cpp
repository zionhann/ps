/**
 * @file 344.Reverse-String.cpp
 * @date 2022-10-07
 * @author Sion Han
 * @from https://leetcode.com/problems/reverse-string/
 * @time-taken 20 min
 * @related Two Pointers, String
 */

class Solution {
public:
    void reverseString(vector<char>& s) {
        auto first = s.begin();
        auto last = prev(s.end());
        
        while (first < last) {
            char temp = *first;
            *first = *last;
            *last = temp;
            
            first++;
            last--;
        }
    }
};