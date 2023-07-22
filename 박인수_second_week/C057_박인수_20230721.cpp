#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool comp(string a, string b) {
    if (a.length() == b.length())
        return a < b;

    return a.length() < b.length();
}

int main() {
    int n;
    string s;
    cin >> n;

    vector<string> vocab;
    for (int i = 0; i < n; i++) {
        cin >> s;
        vocab.push_back(s);
    }

    sort(vocab.begin(), vocab.end(), comp);

    for (int i = 0; i < n; i++) {
        if (i > 0 && vocab[i] == vocab[i - 1])
            continue;
        cout << vocab[i] << "\n";
    }

    return 0;
}