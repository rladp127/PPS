#include <iostream>

using namespace std;


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s;
    string n;

    int num;
    int answer = 0;
    int temp = 0;
    int count = 0;
    bool minus = false;
    
    cin >> s;

    for (int i = 0; i <= s.length(); i++) {
        
        if (s[i] == '+' || s[i] == '-' || i == s.length()) {
            num = stoi(n);
            temp += num;
            n = "";
        } 
        else {
            n += s[i];
        }

        if (count == 0)
            answer = temp * 2;

        if (s[i] == '-') {
            minus = true;
            count++;
        } 
        else if (s[i] == '+'){
            minus = false;
        }

        if (minus == true || (i == s.length()) && count != 0) {
            answer -= temp;
            temp = 0;
        }
    }

    if (count == 0)
        answer = temp;

    cout << answer;

    return 0;
}