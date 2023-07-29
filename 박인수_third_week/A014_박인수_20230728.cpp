#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> answer;
        if (nums.empty()) {
            return answer;
        }

        string start = to_string(nums[0]);
        string end = to_string(nums[0]);

        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] + 1 == nums[i + 1]) {
                end = to_string(nums[i + 1]);
            } else {
                addSummaryRange(answer, start, end);
                start = to_string(nums[i + 1]);
                end = to_string(nums[i + 1]);
            }
        }

        addSummaryRange(answer, start, end);

        return answer;
    }

private:
    void addSummaryRange(vector<string>& answer, const string& start, const string& end) {
        if (start == end) {
            answer.push_back(start);
        } else {
            answer.push_back(start + "->" + end);
        }
    }
};