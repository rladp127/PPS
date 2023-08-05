#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> card(n + 1);

    for (int i = 1; i <= n; i++) {
        card[i] = i;
    }

    int front = 1;
    int end = n;

    while (front != end) {
        front = (front + 1) % n;
        if (front == 0) {
            front = n;
        }

        end = (end + 1) % n;
        if (end == 0) {
            end = n;
        }
        card[end] = card[front];

        front = (front + 1) % n;
        if (front == 0) {
            front = n;
        }
    }

    cout << card[front];

    return 0;
}