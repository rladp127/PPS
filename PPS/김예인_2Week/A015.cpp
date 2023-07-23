#include <iostream>
using namespace std;

// 처음 5자리의 숫자들이 04256이면, 각 숫자를 제곱한 수들의 합 0+16+4+25+36 = 81 을 10으로 나눈 나머지인 1이 검증수이다.

int main () {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int num;
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        cin >> num;
        sum += num*num;
    }

    cout << sum%10;

    return 0;
}