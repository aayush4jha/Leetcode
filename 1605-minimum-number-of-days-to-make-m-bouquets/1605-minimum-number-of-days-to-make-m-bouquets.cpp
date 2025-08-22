class Solution {
public:
    bool check(vector<int>&arr, int mid, int m, int k)
    {
        int count=0;
        int bouquets=0;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]<=mid)
            {
                count++;
                if(count==k)
                {
                    bouquets++;
                    count=0;
                }
            }
            else
            {
                count=0;
            }
        }
        return bouquets>=m;
    }
    int n;
    int minDays(vector<int>& bloomDay, int m, int k) {
        int low=1, high=1e9;
        int ans=-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(check(bloomDay, mid, m, k))
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