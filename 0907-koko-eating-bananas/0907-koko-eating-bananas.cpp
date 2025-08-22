class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1, high=*max_element(piles.begin(),piles.end());
        int ans=0;
        while(low<=high)
        {
            int mid=(low+high)/2;
            long f=0;
            for(int i=0;i<piles.size();i++)
            {
                f+=(piles[i]+mid-1)/mid;
            }
            if(f<=h)
            {
                ans=mid;
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        return ans;
    }
};