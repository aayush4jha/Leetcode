class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int left=1;
        int right=0;
        for(int num: nums)
        {
            right=max(right, num);
        }
        while(left<right)
        {
            int mid=left+(right-left)/2;
            long long total=0;
            for(int num:nums)
            {
                total+=(num+mid-1)/mid;
            }
            if(total<=threshold)
            {
                right=mid;
            }
            else
            {
                left=mid+1;
            }
        }
        return left;
    }
};