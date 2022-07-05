class Solution {
public:
    bool halvesAreAlike(string s) {
        for (char& c : s) {
            c = tolower(c);
        }
        
        int len = s.length() / 2;
        string first = s.substr(0, len);
        string second = s.substr(len);
        map<string, int> counter {
            {first, 0},
            {second, 0}
        };
        
        for (char c : first) {
            if (isVowel(c)) {
                counter[first] += 1;
            }
        }
        
        for (char c : second) {
            if (isVowel(c)) {
                counter[second] += 1;
            }
        }
        return counter[first] == counter[second];
    }
    bool isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }
};