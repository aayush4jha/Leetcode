class Solution {
public:
    bool isPalindrome(string s) {
        string s1;
        for(char ch: s)
        {
            if(isalnum(ch)) {
                s1 += tolower(ch);
            }
        }
        return check(s1, 0, s1.size()-1);
    }

    bool check(const string &s, int l, int r)
    {
        if(l>=r) return true;
        if(s[l]!=s[r]) return false;
        return check(s, l+1, r-1);
    }
};