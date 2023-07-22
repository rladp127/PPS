#include <iostream>
using namespace std;

int main() {
    int n;
    int hexagonRingCount = 0;
    cin >> n;

    int cellsInCurrentRing = 1;
    int cellsInNextRing = 6;
    while (n > cellsInCurrentRing) {
        hexagonRingCount++;
        cellsInCurrentRing += cellsInNextRing;
        cellsInNextRing += 6;
    }

    cout << hexagonRingCount + 1;

    return 0;
}