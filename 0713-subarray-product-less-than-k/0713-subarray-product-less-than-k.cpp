class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int ans = 0;
        for(int i = 0; i < nums.size();i++){
            long long product = 1;
            for (int j = i; j < nums.size(); j++) {
                product *= nums[j];
                if (product < k) {
                    ans++;
                }
                else {
                    break;
                }
            }
        }
        return ans;
    }
};