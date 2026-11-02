class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        const size_t n= nums.size();
        int ans=0;
        for(int i = 0 ;i<n  ;i ++){
            int median=n/2;
            ans+=abs(nums[median]-nums[i]);
        }
        return ans;            
     }
};