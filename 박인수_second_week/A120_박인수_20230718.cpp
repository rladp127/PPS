#include <unordered_map>
#include <string>
using namespace std;

class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char, int> charCount;

        for (char sc : s)
            charCount[sc]++;

        for (char tc : t) {
            if (charCount[tc] == 0)
                return tc;
            charCount[tc]--;
        }

        return ' ';
    }
};