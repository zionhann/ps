/**
 * @file 205.Isomorphic-Strings.cpp
 * @date 2022-09-29
 * @author Sion Han
 * @from https://leetcode.com/problems/isomorphic-strings/
 * @time-taken 59 min
 * @related Hash Table, String
 */

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char, char> map, map_reversed;
        
        for (int i = 0; i < s.size(); ++i) {
            char& key = s[i];
            char& val = t[i];
            
            if (map.count(key) && map[key] != val) {
                return false;
            }
            map.insert({key, val});
        }
        
        for (auto pair : map) {
            const char key = pair.first;
            char& val = pair.second;
            
            if (map_reversed.count(val) && map_reversed[val] != key) {
                return false;
            }
            map_reversed.insert({val, key});
        }
        return true;
    }
};