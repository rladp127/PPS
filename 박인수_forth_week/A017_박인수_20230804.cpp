#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    int digit;
    int num[10] = {0};

    cin >> n;

    while (n > 0) {
        digit = n % 10;
        n = n / 10;
        num[digit]++;
    }

    int six_and_nine = (num[6] + num[9] + 1) / 2;

    int max_count = 0;
    for (int i = 0; i < 10; i++) {
        if (i != 6 && i != 9) {
            max_count = max(max_count, num[i]);
        }
    }

    max_count = max(max_count, six_and_nine);

    cout << max_count;

    return 0;
}