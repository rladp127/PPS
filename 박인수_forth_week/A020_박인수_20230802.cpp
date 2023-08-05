#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int leaving, entering;
    int currentInside = 0, maxInside = 0;

    for (int i = 0; i < 4; i++) {
        cin >> leaving >> entering;
        currentInside -= leaving;
        currentInside += entering;
        if (currentInside > maxInside)
            maxInside = currentInside;
    }

    cout << maxInside;

    return 0;
}