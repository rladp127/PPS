#include <string>
using namespace std;

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        return processBackspace(s) == processBackspace(t);
    }

    string processBackspace(string& str) {
        string processed;
        for (char c : str) {
            if (c == '#') {
                if (!processed.empty()) {
                    processed.pop_back(); // Remove the last character
                }
            } else {
                processed.push_back(c); // Add the character to the result
            }
        }
        return processed;
    }
};