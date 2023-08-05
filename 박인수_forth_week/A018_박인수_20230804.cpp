#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    int input;
    int answer = 0;

    cin >> n;
    
    vector<int> v1(n);
    vector<int> v2(n);

    for (int i = 0; i < n; i++) {
        cin >> input;
        v1[i] = input;
    }

    for (int i = 0; i < n; i++) {
        cin >> input;
        v2[i] = input;
    }

    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end(), greater<int>());

    for (int i = 0; i < n; i++) {
        answer += v1[i] * v2[i];
    }

    cout << answer;

    return 0;
}