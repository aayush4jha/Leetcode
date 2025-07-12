class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count=0;
        vector<int> v;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                count++;
                continue;
            }
            else
            {
                v.push_back(nums[i]);
            }
        }
        for(int i=0;i<count;i++)
        {
            v.push_back(0);
        }
        nums=v;
    }
};