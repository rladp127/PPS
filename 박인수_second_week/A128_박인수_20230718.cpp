#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool isMatchingPair(char opening, char closing) {
    return (opening == '(' && closing == ')') || (opening == '[' && closing == ']');
}

bool isBalanced(string s) {
    stack<char> b;

    for (char c : s) {
        if (c == '(' || c == '[') {
            b.push(c);
        } else if (c == ')' || c == ']') {
            if (b.empty() || !isMatchingPair(b.top(), c)) {
                return false;
            }
            b.pop();
        }
    }

    return b.empty();
}

int main() {
    string s;

    while (getline(cin, s)) {
        if (s == ".")
            break;

        if (isBalanced(s)) {
            cout << "yes\n";
        } else {
            cout << "no\n";
        }
    }

    return 0;
}