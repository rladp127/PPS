#include <iostream>
#include <vector>
using namespace std;

int main () {
    vector<int> output;
    string astr, bstr;
    cin >> astr >> bstr;

    int a = astr.length()-1;
    int b = bstr.length()-1;
    int next = 0;

    while(1) {
        int count = 0;
        if (a < 0 || b < 0) break;

        // 1 갯수 세는 부분
        if (astr[a--] == '1') count++;
        if (bstr[b--] == '1') count++;
        if (next == 1) {
            count++;
            next = 0;
        }

        // 계산!
        if (count == 0) {
            output.insert(output.begin(), 0);
        }
        if (count == 1) {
            output.insert(output.begin(), 1);
        }
        else if (count == 2) {
            output.insert(output.begin(), 0);
            next = 1;
        }
        else if (count == 3) {
            output.insert(output.begin(), 1);
            next = 1;
        }

    }

    for (int i = 0; i < output.size(); i++) {
        cout << output[i];
    }
    cout << endl;

    if (a >= 0) {
        for (int i = a; i >= 0; i--) {
            if (next == 0) {
                output.insert(output.begin(), astr[i]-48);
            }

            else if (next == 1) {
                if (astr[i] == '1') {
                    output.insert(output.begin(), 0);
                    next = 1;
                }
                else { // 0인 경우
                    next = 0;
                    output.insert(output.begin(), 1);
                }
            }
        }
    }
    else if (b >= 0) {
        for (int i = b; i >= 0; i--) {
            if (next == 0)
                output.insert(output.begin(), bstr[i]-48);

            if (next == 1) {
                if (bstr[i] == '1') {
                    next = 1;
                    output.insert(output.begin(), 0);
                }
                else { // 0인 경우
                    next = 0;
                    output.insert(output.begin(), 1);
                }
            }
        }
    }

    if (next == 1) {
        cout << "1넣는다\n";
        output.insert(output.begin(), 1);
    }

    for (int i = 0; i < output.size(); i++) {
        cout << output[i];
    }

    return 0;
}