#include <iostream>
using namespace std;

int main() {
    int n, direction;
    cin >> n >> direction;

    double object1_position = 0.0, object2_position = 0.0;
    double q, w, e, r;

    const int OBJECT1_DIRECTION = 1;
    const int OBJECT2_DIRECTION = 2;

    if (direction == OBJECT1_DIRECTION) {
        object1_position = 1.0;
    } else if (direction == OBJECT2_DIRECTION) {
        object2_position = 1.0;
    }

    cin >> q >> w >> e >> r;

    for (int i = 0; i < n; i++) {
        double x = q * object1_position + e * object2_position;
        double y = w * object1_position + r * object2_position;
        object1_position = x;
        object2_position = y;
    }

    cout << static_cast<int>(1000 * object1_position) << "\n" << static_cast<int>(1000 * object2_position);

    return 0;
}