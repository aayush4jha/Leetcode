class Solution {
public:
    int func(int i, vector<int>& dp, vector<int>& arr) {
        if (i < 0) return 0;
        if (i == 0) return arr[0];
        if (dp[i] != -1) return dp[i];
        int c = arr[i] + max(func(i - 2, dp, arr), func(i - 3, dp, arr));
        return dp[i] = c;
    }

    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;
        if (n == 1) return nums[0];
        vector<int> dp(n, -1);
        return max(func(n - 1, dp, nums), func(n - 2, dp, nums));
        }
};