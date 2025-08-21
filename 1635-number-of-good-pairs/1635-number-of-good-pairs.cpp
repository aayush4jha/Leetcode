class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int x: nums)
        {
            m[x]++;
        }
        int ans=0;
        set<int> s;
        for(int i=0;i<nums.size();i++)
        {
            s.insert(nums[i]);
        }
        for(int x: s)
        {
            if(m[x]>=2)
            {
                ans+=m[x]*(m[x]-1)/2;
            }
        }
        return ans;
    }
};