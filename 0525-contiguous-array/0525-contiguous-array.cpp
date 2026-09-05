class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int, int> mp;
        int sum = 0;
        int ans = 0;
        mp[0]=-1;
        const size_t n = nums.size();
        for (int i = 0; i < n; i++) {
            if (nums[i] == 0) {
                sum += -1;
            } else {
                sum += 1;
            }
            if (mp.find(sum) != mp.end()) {
                int len = i - mp[sum];
                ans = max(ans, len);
            } else {
                mp[sum] = i;
            }
        }
        return ans;
    }
};