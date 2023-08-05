#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int count = 0;

        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        int gIdx = 0;
        int sIdx = 0;

        while (gIdx < g.size() && sIdx < s.size()) {
            if (s[sIdx] >= g[gIdx]) {
                count++;
                gIdx++;
            }
            sIdx++;
        }

        return count;
    }
};