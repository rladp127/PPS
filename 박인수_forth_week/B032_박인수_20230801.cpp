#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> day(n);
    for (int i = 0; i < n; i++) {
        cin >> day[i];
    }

    sort(day.begin(), day.end(), greater<int>());

    int max_value = 0;
    for (int i = 0; i < n; i++) {
        int current_value = day[i] + i + 2;
        max_value = max(max_value, current_value);
    }

    cout << max_value << endl;

    return 0;
}