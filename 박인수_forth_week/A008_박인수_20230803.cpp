#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int c, n, score;
    vector<int> scores;

    cin >> c;

    for (int i = 0; i < c; i++) {
        cin >> n;
        scores.clear();
        double sum = 0;

        for (int j = 0; j < n; j++) {
            cin >> score;
            scores.push_back(score);
            sum += score;
        }

        double average = sum / n;
        int count = 0;

        for (int k = 0; k < n; k++) {
            if (scores[k] > average)
                count++;
        }

        double answer = (double)count / n * 100;

        cout << fixed;
        cout.precision(3);
        cout << answer << "%" << "\n";
    }

    return 0;
}