class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> output;

        for (int i = left; i <= right; i++) {
            int result = 0, tmp = i;

            while (tmp > 0) {
                int divide = tmp % 10;

                if (divide == 0) {
                    result = 1; break;
                }

                else if (i % divide != 0) {
                    result = 1;
                }
                tmp /= 10;
            }

            if (result == 0) output.push_back(i);
        }
        return output;
    }
};