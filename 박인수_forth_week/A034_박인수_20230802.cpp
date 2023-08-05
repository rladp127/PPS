#include <iostream>
#include <set>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int input;
    set<int> remainders;

    for (int i = 0; i < 10; i++) {
        cin >> input;
        remainders.insert(input % 42);
    }

    cout << remainders.size();

    return 0;
}