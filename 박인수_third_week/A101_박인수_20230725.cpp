#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        int sumAlice = 0;
        int sumBob = 0;

        for (int aliceSize : aliceSizes) 
            sumAlice += aliceSize;

        for (int bobSize : bobSizes) 
            sumBob += bobSize;

        int diff = (sumAlice - sumBob) / 2;

        unordered_set<int> aliceSet(aliceSizes.begin(), aliceSizes.end());

        for (int bobSize : bobSizes) {
            int targetAliceSize = bobSize + diff;
            if (aliceSet.count(targetAliceSize)) {
                return {targetAliceSize, bobSize};
            }
        }

        return {};
    }
};