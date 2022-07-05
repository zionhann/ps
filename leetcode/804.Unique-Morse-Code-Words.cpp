class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        set<string> results;
        vector<string> morse_codes = {
            ".-","-...","-.-.","-..",
            ".","..-.","--.","....",
            "..",".---","-.-",".-..",
            "--","-.","---",".--.",
            "--.-",".-.","...","-",
            "..-","...-",".--","-..-",
            "-.--","--.."
            };
        
        for (string word : words) {
            string trans;
            
            for (auto iter = word.begin(); iter != word.end(); ++iter) {
                int index = parseIndex(*iter);
                
                trans.append(morse_codes.at(index));
            }
            results.insert(trans);
        }
        return results.size();
    }
    int parseIndex(char c) {
        return c - 'a';
    }
};