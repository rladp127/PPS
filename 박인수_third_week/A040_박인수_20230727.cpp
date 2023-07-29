#include <string>
#include <cctype>
using namespace std;

class Solution {
public:
    bool halvesAreAlike(string s) {
        int count = 0;
        int mid = s.length() / 2;

        for (int i = 0; i < s.length(); i++) {
            char c = tolower(s[i]);
            if (i < mid) {
                if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
                    count++;
            } else {
                if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
                    count--;
            }
        }

        return count == 0;
    }
};