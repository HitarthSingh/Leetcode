class Solution {
public:
    int minMoves(vector<int>& nums) {
        int ans = 0;
        auto it = *min_element(begin(nums), end(nums));
        for (int i = 0; i < nums.size(); i++) {
            ans += nums[i] - it;
        }
        return ans;
    }
};