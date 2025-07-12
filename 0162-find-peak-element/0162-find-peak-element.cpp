class Solution {
public:
    int findPeakElement(vector<int>& nums) 
    {
        int n=nums.size();
        if(n==1)
        {
            return 0;
        }
        int peak=-1;
        for(int i=0;i<n;i++)
        {
            if(i==0)
            {
                if(nums[i]>nums[i+1])
                {
                    peak=i;
                    break;
                }
            }
            else if(i==n-1)
            {
                if(nums[i-1]<nums[i])
                {
                    peak=i;
                    break;
                }
            }
            else
            {
                if(nums[i]>nums[i-1] && nums[i]>nums[i+1])
                {
                    peak=i;
                    break;
                }
            }
        }
        return peak;
    }
};