class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        int left = 0;
        int right = k - 1;
        int sum = 0;
        for (int i = left; i <= right; i++) {
            sum += nums[i];
        }
        int maxSum = sum;
        while (right < n - 1) {
            sum -= nums[left];
            left++;
            right++;
            sum += nums[right];
            maxSum = max(maxSum, sum);
        }
        return (double)maxSum / k;
    }
};