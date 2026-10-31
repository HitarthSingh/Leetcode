class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> ans;
        sort(nums.begin(), nums.end());
        const size_t n = nums.size();
        int smallest = nums[0];
        int largest = nums[n - 1];
        unordered_map<int, int> mp;
        for (int x : nums) {
            mp[x]++;
        }
        for (int i = smallest; i <= largest; i++) {
            if (mp.find(i) == mp.end()) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};