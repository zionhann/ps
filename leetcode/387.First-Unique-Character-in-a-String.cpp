/**
 * @file 387.First-Unique-Character-in-a-String.cpp
 * @date 2022-11-11
 * @author Sion Han
 * @from https://leetcode.com/problems/first-unique-character-in-a-string/
 * @time-taken N/A
 * @related 
 */

class Solution {
public:
    int firstUniqChar(string s) {
        int index = 0;
        map<char, int> indices;
        
        for (char c : s) {
            if (!indices.count(c)) {
                indices.insert({c, index});
            }
            index++;
        }
        vector<int> cnt(index);
        
        for (char c: s) {
            cnt[indices[c]]++;
        }
        int ans = 0;
        
        while (cnt[ans++] != 1) {
            if (ans == index) {
                return -1;
            }
        }
        return ans-1;
    }
};