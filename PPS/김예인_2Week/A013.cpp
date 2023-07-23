class Solution {
public:
    int singleNumber(vector<int>& nums) {
        if (nums.size() == 1) return nums[0];
        sort(nums.begin(), nums.end());

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[i-1] && nums[i] != nums[i+1])
                return nums[i];
        }
        if (nums[nums.size()-1] != nums[nums.size()-2]) return nums[nums[nums.size()-1]];
        if (nums[0] != nums[1]) return nums[0];

        return 0;
    }
};
