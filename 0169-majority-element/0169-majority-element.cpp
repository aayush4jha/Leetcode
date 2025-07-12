class Solution {
public:
    int majorityElement(vector<int>& nums) {
    unordered_map<int, int> counts;
    int majority_count = nums.size() / 2;
    
    for (int num : nums) {
        counts[num]++;
        
        if (counts[num] > majority_count) {
            return num;
        }
    }

    return -1;
}
};