// 31 min
class Solution {
public:
    string reversePrefix(string word, char ch) {
        // find substr with given word.
        string ch_str(1, ch);
        int pos = word.find(ch_str) + 1;
        stack<char> stack;
        
        // if found, push it to the stack.
        // if not, return origin
        if (pos == string::npos) {
            return word;
        } else {
            string target = word.substr(0, pos);
            
            for (char c : target) {
                stack.push(c);
            }
        }
        // build reversed str using stack
        string reversed;
        
        while (!stack.empty()) {
            reversed.push_back(stack.top());
            stack.pop();
        }
        // concat another substr of origin to reversed str
        return reversed + word.substr(pos);
    }
};