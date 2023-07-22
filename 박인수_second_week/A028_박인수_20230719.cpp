#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string a;
    string b;
    string answer = "";
    
    int difference;
    int carry = 0;

    cin >> a >> b;

    if (a.length() < b.length()) {
        swap(a, b);
    }
    
    difference = a.length() - b.length();

    for (int i = 0; i < difference; i++) {
        b = "0" + b;
    }

    vector<int> result;

    for (int i = a.length() - 1; i >= 0; i--) {
        int sum = carry + (a[i] - '0') + (b[i] - '0');
        result.push_back(sum % 10);
        carry = sum / 10;
    }

    if (carry == 1)
        result.push_back(1);

    for (int i = result.size() - 1; i >= 0; i--) {
        cout << result[i];
    }

    return 0;
}