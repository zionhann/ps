class Solution {
public:
    string removeOuterParentheses(string s) {
        const char open = '(';
        const char close = ')';
        int open_counter = 0;
        int close_counter = 0;
        
        queue<char> queue;
        vector<string> valid;
        string container;
        string result;
        
        for (char c : s) {
            queue.push(c);
        }
        
        while (!queue.empty()) {
            char each = queue.front();
            
            if (each == open) {
                open_counter += 1;
            } else {
                close_counter += 1;
            }
            
            container.push_back(each);
            queue.pop();
            
            if (open_counter == close_counter) {
                valid.push_back(container);
                container.clear();
            }
        }
        
        for (string each : valid) {
            each.erase(each.begin());
            each.erase(--each.end());
            result.append(each);
        }
        return result;
    }
};