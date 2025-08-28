class Solution {
public:
    int func(int i, vector<int>&dp, vector<int>& nums)
    {
        if(i<0) return 0;
        if(i==0) return nums[0];
        if(dp[i]!=-1) return dp[i];
        int c=nums[i]+max(func(i-2,dp,nums), func(i-3,dp,nums));
        dp[i]=c;
        return c;
    }
    int solve(vector<int> nums) {
        int n=nums.size();
        if(n==0) return 0;
        if(n==1) return nums[0];
        vector<int> dp(n,-1);
        return max(func(n-1,dp,nums), func(n-2,dp,nums));
    }

    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==0) return 0;
        if(n==1) return nums[0];
        vector<int> nums1(nums.begin(), nums.end()-1); 
        vector<int> nums2(nums.begin()+1, nums.end());
        return max(solve(nums1), solve(nums2));
    }
};