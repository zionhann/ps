/**
 * Solved: 2022. 7. 6.
 * Time : 13 min
 * A064
 */
class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int counter = 0;
        vector<int> origin = heights;
        
        sort(heights.begin(), heights.end());
        
        for (int i = 0; i < heights.size(); i++) {
            if (origin.at(i) != heights.at(i)) {
                counter += 1;
            }
        }
        return counter;
    }
};