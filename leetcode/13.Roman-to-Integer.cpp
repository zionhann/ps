/**
 * @file 13.Roman-to-Integer.cpp
 * @date 2022-11-12
 * @author Sion Han
 * @from https://leetcode.com/problems/roman-to-integer/
 * @time-taken 40 min
 * @related 
 */

class Solution {
public:
    int romanToInt(string s) {
        map<char, int> symbol {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };
        const int size = s.size();
        int ans = 0;
        int i = 0;
        
        while (i < size-1) {
            const int curr = symbol[s[i]];
            const int next = symbol[s[i+1]];
            
            if (curr >= next) {
                ans += curr;
                i++;
                continue;
            }
            ans += (next-curr);
            i += 2;
        }
        
        if (i < size) {
            ans += symbol[s.back()];
        }
        return ans;
    }
};