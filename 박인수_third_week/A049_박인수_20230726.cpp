#include <iostream>
#include <unordered_set>
using namespace std;

bool isVowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main() {
    string s;

    while (cin >> s && s != "end") {
        unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u'};
        int consecutiveVowels = 0;
        int consecutiveNonVowels = 0;
        bool hasRepeatedCharacter = false;

        for (int i = 0; i < s.length(); i++) {
            if (isVowel(s[i])) {
                consecutiveVowels++;
                consecutiveNonVowels = 0;
            } else {
                consecutiveNonVowels++;
                consecutiveVowels = 0;
            }

            if (vowels.count(s[i]) && consecutiveVowels >= 3) {
                cout << "<" << s << "> is not acceptable.\n";
                hasRepeatedCharacter = true;
                break;
            }

            if (!vowels.count(s[i]) && consecutiveNonVowels >= 3) {
                cout << "<" << s << "> is not acceptable.\n";
                hasRepeatedCharacter = true;
                break;
            }

            if (i > 0 && s[i] == s[i - 1] && s[i] != 'e' && s[i] != 'o') {
                cout << "<" << s << "> is not acceptable.\n";
                hasRepeatedCharacter = true;
                break;
            }
        }

        if (!hasRepeatedCharacter) {
            if (consecutiveVowels > 0) {
                cout << "<" << s << "> is acceptable.\n";
            } else {
                cout << "<" << s << "> is not acceptable.\n";
            }
        }
    }

    return 0;
}






