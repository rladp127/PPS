#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    
    copy_if(arr.begin(), arr.end(), back_inserter(answer), [divisor](int num) {
        return num % divisor == 0;
    });

    sort(answer.begin(), answer.end());

    if (answer.empty())
        answer.push_back(-1);
    
    return answer;
}