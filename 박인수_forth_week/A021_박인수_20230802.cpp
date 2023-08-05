#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n, plug;
    int count = 0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> plug;
        if (i == 0) {
            count += plug;
        } else {
            count += plug - 1;
        }
    }

    cout << count;

    return 0;
}