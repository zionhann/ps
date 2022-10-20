/**
 * @file 242.Valid-Anagram.cpp
 * @date 2022-10-20
 * @author Sion Han
 * @from https://leetcode.com/problems/valid-anagram/
 * @time-taken 20 min
 * @related 
 */

class Solution {
public:
    bool isAnagram(string s, string t) {
        int pos;
        
        for (char c : t) {
            if ((pos = s.find(c)) == string::npos) {
                return false;
            }
            s.erase(pos, 1);
        }
        return (s.empty()) 
            ? true
            : false;
    }
};