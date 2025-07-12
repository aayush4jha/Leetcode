class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> m;
        for(int a : nums)
        {
            m[a]++;
        }
        for(auto i : m)
        {
            if(i.second==1)
            {
                return i.first;
            }
        }
        return -1;
    }
};