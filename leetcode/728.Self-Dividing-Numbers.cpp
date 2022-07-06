// 30min
class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> results;
        
        for (int i = left; i <= right; i++) {
            int counter = 0;
            // if i < 10, push i to the vector.
            if (i < 10) {
                results.push_back(i);
                continue;
            }
            // it not, convert integer i to string.
            // for every digit of i, check if it satisfies given condition.
            string i_str = to_string(i);
            
            for (char c : i_str) {
                int digit = c - '0';
                
                if (digit != 0 && i % digit == 0) {
                    counter += 1;
                }
            }
            
            if (counter == i_str.length()) {
                results.push_back(i);
            }
        }
        return results;
    }
};