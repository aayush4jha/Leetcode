class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> a;
        for(int i=0;i<nums1.size();i++)
        {
            for(int j=0;j<nums2.size();j++)
            {
                if(nums1[i]==nums2[j])
                {
                    a.insert(nums1[i]);
                }
            }
        }
        vector<int> b;
        for(int x : a)
        {
            b.push_back(x);
        }
        return b;
    }
};