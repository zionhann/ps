/**
 * Solved: 2022. 7. 6.
 * Time : 36 min
 * A087
 */
class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        int max = 0;
        multimap<int, int, greater<int>> m;
        
        for (vector<int> box : boxTypes) {
            m.insert({box.at(1), box.at(0)});
        }
        
        for (auto box : m) {
            if (truckSize < box.second) {
                max += box.first * truckSize;
                return max;
            }
            max += box.first * box.second;
            truckSize -= box.second;
        }
        return max;
    }
};