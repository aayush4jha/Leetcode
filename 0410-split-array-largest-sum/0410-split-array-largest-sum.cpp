class Solution {
public:
    int countSplits(vector<int>& nums, int mid) {
        int cnt = 1;
        int sum = 0;
        for(int i=0;i<nums.size();i++) {
            if(sum + nums[i] <= mid) {
                sum += nums[i];
            } else {
                cnt++;
                sum = nums[i];
            }
        }
        return cnt;
    }

    int splitArray(vector<int>& nums, int k) {
        int n = nums.size();
        if(k > n) return -1;
        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0);
        int ans = high;
        while(low <= high) {
            int mid = (low + high) / 2;
            int sp = countSplits(nums, mid);
            if(sp <= k) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
};
