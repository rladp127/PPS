#include <iostream>
using namespace std;

int main() {
    int n;
    int change = 0;

    cin >> n;

    int denominations[] = {500, 100, 50, 10, 5, 1};

    n = 1000 - n;

    for (int i = 0; i < 6; i++) {
        change += n / denominations[i];
        n %= denominations[i];
    }

    cout << change;
}