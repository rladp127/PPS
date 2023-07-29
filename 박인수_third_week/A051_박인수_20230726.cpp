#include <iostream>
using namespace std;

char alphabet[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    bool flag = false;
    string s;
    int time = 0;
    cin >> s;

    for (int i = 0; i < s.length(); i++) {
        flag = false;
        for (int j = 0; j < 26; j++) {
            if (s[i] == alphabet[j]) {
                if (j < 15) {
                    for (int k = 0; k <= 12; k += 3) {
                        if (j >= k && j < k + 3) {
                            time += k / 3 + 3;
                            flag = true;
                            break;
                        }
                    } 
                } else {
                    if (j >= 15 && j < 19)
                        time += 8;
                    else if (j >= 19 && j < 22)
                        time += 9;
                    else if (j >= 22 && j < 26)
                        time += 10;
                }
            }
            if (flag)
                break;
        }
    }

    cout << time;

    return 0;
}