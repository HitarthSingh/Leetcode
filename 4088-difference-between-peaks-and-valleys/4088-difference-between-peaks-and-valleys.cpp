class Solution {
public:
    int peakValleyDifference(vector<int>& nums) {
        long long peak = 0;
        long long valley = 0;
        const size_t n = nums.size();
        for (int i = 1; i < n - 1; i++) {
            if (nums[i] > nums[i - 1] && nums[i] > nums[i + 1]) {
                peak += nums[i];
            } else if (nums[i] < nums[i - 1] && nums[i] < nums[i + 1]) {
                valley += nums[i];
            }
        }
        return peak - valley;
    }
};