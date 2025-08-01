class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        vector<int> arr(n);
        map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        int mn=INT_MAX;
        int mnEl;
        for(auto it : mp)
        {
            if(it.second<mn)
            {
                mn=it.second;
                mnEl=it.first;
            }
        }
        return mnEl;
    }
};