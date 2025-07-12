class Solution {
public:
    bool isPalindrome(int x) {
        int original=x;
        long ans;
        int a=0;
        if(x<0)
        {
            return false;
        }
        else
        {  
            while(x!=0)
            {
                ans=ans*10+x%10;
                x=x/10;
            }
        }
        return original==ans;
    }
};