class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        vector<int> v(n,0);
        for(int i=-0;i<nums.size();i++)
        {
            v[nums[i]-1]++;
        }
        vector<int> ans;
        for(int i=0;i<n;i++)
        {
            if(v[i]==0)
            {
                ans.push_back(i+1);
            }
        }
        return ans;
    }
};