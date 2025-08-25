class Solution {
public:
    bool isPalindrome(string &s, int l, int r)
    {
        while(l<r)
        {
            if(s[l]!=s[r]) return false;
            l++; r--;
        }
        return true;
    }
    string longestPalindrome(string s) {
        string ans, finalAns;
        int n=s.length();
        if(n==1)
        {
            return s;
        }
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                if(isPalindrome(s,i,j))
                {
                    ans=s.substr(i,j-i+1);
                }
            }
            if(ans.length()>finalAns.length())
            {
                finalAns=ans;
            }
        }
        return finalAns;
    }
};