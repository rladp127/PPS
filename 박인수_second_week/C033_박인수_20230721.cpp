#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double a, b;
    cin >> a >> b;
    double minRatio = a / b;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        double currentRatio = a / b;
        if (minRatio > currentRatio)
            minRatio = currentRatio;
    }

    cout << fixed << setprecision(2);

    cout << minRatio * 1000;

    return 0;
}