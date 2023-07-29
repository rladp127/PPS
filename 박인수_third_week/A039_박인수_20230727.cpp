class Solution {
public:
    bool isPerfectSquare(int num) {
        if (num < 0) {
            return false;
        }

        long guess = num;

        while (guess * guess > num) {
            guess = (guess + num / guess) / 2;
        }

        return guess * guess == num;
    }
};