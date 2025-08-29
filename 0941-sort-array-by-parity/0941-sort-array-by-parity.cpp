class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        sort(nums.begin(), nums.end(), [](int a, int b) {
            int parityA = a % 2;
            int parityB = b % 2;
            if(parityA == parityB) return a < b;
            return parityA < parityB;
        });
        return nums;
    }
};
