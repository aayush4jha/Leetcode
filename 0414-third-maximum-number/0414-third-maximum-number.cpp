class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long long firstMax = LLONG_MIN, secondMax = LLONG_MIN, thirdMax = LLONG_MIN;
        
        for (int num : nums) {
            if (num > firstMax) {
                thirdMax = secondMax;
                secondMax = firstMax;
                firstMax = num;
            } else if (num != firstMax && num > secondMax) {
                thirdMax = secondMax;
                secondMax = num;
            } else if (num != firstMax && num != secondMax && num > thirdMax) {
                thirdMax = num;
            }
        }
        
        return thirdMax != LLONG_MIN ? thirdMax : firstMax;
    }
};