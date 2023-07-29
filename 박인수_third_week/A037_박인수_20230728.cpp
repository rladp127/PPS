#include <vector>
using namespace std;

class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> answer;

        for (int num = left; num <= right; num++) {
            if (isSelfDividing(num)) {
                answer.push_back(num);
            }
        }

        return answer;
    }

private:
    bool isSelfDividing(int num) {
        int n = num;

        while (n > 0) {
            int digit = n % 10;
            if (digit == 0 || num % digit != 0) {
                return false;
            }
            n /= 10;
        }

        return true;
    }
};