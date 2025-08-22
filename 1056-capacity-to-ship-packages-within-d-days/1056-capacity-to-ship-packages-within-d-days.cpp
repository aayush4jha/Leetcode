class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low=*max_element(weights.begin(),weights.end()), 
        high=accumulate(weights.begin(), weights.end(),0), ans=high;
        while(low<=high)
        {
            int mid=(low+high)/2;
            int sum=0;
            int count = 1;
            for(int i=0;i<weights.size();i++)
            {
                if(sum+weights[i]>mid)
                {
                    count++;
                    sum=0;
                }
                sum+=weights[i];
            }
            if(count<=days)
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