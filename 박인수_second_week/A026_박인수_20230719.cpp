#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool solution(int x) {
    int sumOfDigits = 0;
    int num = abs(x);

    while (num != 0) {
        sumOfDigits += num % 10;
        num /= 10;
    }

    return x % sumOfDigits == 0;
}