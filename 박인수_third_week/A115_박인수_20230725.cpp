#include <iostream>
using namespace std;

class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int charCount[26] = {0}; // Initialize an array to store character counts

        for (char c : text) {
            charCount[c - 'a']++; // Increment the count of the character
        }

        // Check the required characters 'b', 'a', 'l', 'o', and 'n'
        int minOccurrences = charCount['b' - 'a'];
        minOccurrences = min(minOccurrences, charCount['a' - 'a']);
        minOccurrences = min(minOccurrences, charCount['l' - 'a'] / 2);
        minOccurrences = min(minOccurrences, charCount['o' - 'a'] / 2);
        minOccurrences = min(minOccurrences, charCount['n' - 'a']);

        return minOccurrences;
    }
};