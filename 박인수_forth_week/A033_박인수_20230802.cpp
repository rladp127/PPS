#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int participant = 1;
    int max = 0;

    for (int i = 1; i <= 5; i++) {
        int score = 0;
        for (int j = 0; j < 4; j++) {
            int input;
            cin >> input;
            score += input;
        }
        if (score > max) {
            max = score;
            participant = i;
        }
    }

    cout << participant << " " << max;
    
    return 0;
}