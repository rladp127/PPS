#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int a, b, c;
    int answer;
    int digit;
    int count[10] = {0};

    cin >> a >> b >> c;

    answer = a * b * c;

    while (answer > 0) {
        digit = answer % 10;
        answer /= 10;
        count[digit]++;
    }

    for (int i = 0; i < 10; i++) {
        cout << count[i] << "\n";
    }

    return 0;
}