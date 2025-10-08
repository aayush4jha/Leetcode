class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(),potions.end());
        vector<int> v(spells.size(), 0);
        for(int i=0;i<spells.size();i++)
        {
            long long a=(success+spells[i]-1)/spells[i];
            int ans=0;
            int low=0;
            int high=potions.size()-1;
            while(low<=high)
            {
                int mid=low+(high-low)/2;
                if(potions[mid]>=a)
                {
                    ans=potions.size()-mid;
                    high=mid-1;
                }
                else
                {
                    low=mid+1;
                }
            }
            v[i]=ans;
        }
        return v;
    }
};