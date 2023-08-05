#include <stdbool.h>

bool solution(const char* s) {
    int count = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] < '0' || s[i] > '9')
            return false;
        count++;
    }

    return (count == 4 || count == 6);
}