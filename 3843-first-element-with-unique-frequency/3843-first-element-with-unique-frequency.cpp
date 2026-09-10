class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
        unordered_map<int, int> freq;
        unordered_map<int, int> freqCount;
        for (int x : nums) {
            freq[x]++;
        }
        for (auto [x, f] : freq) {
            freqCount[f]++;
        }
        for (int i = 0; i < nums.size(); i++) {
            if (freqCount[freq[nums[i]]] == 1) {
                return nums[i];
            }
        }
        return -1;
    }
};
