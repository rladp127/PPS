#include <string>

using namespace std;

class Solution {
public:
    string removeOuterParentheses(string s) {
        int balance = 0;
        string answer = "";

        for (char c : s) {
            if (c == '(') {
                if (balance > 0) {
                    answer += c;
                }
                balance++;
            } else if (c == ')') {
                balance--;
                if (balance > 0) {
                    answer += c;
                }
            }
        }

        return answer;
    }
};