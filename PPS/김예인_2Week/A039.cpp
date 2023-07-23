#include <cmath>

class Solution {
public:
    bool isPerfectSquare(int num) {
        double square = sqrt(num);
        if (square - (int)square == 0) return true;
        else return false;
    }
};