#include <string>
using namespace std;

class Solution {
public:
    bool checkRecord(string s) {
        int aCount = 0;
        int lCount = 0;

        for (char c : s) {
            if (c == 'A') {
                aCount++;
                lCount = 0;
            } else if (c == 'L') {
                lCount++;
            } else {
                lCount = 0;
            }

            if (aCount > 1 || lCount > 2) {
                return false;
            }
        }

        return true;
    }
};