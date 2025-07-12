class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> ans;
        for(int i=0;i<s.size();i++)
        {
            int value = s[i];
            if(value<=57 && value>=48)
            {
                ans.push_back(s[i]);
                continue;
            }
            if(value<=122 && value>=97 || value<=90 && value>=65)
            {
                if(value<=90 && value>=65){
                    char new_value = value+32;
                    ans.push_back(new_value);
                }
                else{
                    ans.push_back(value);
                }
            }
        }
        for(int i=0;i<ans.size();i++)
        {
            if(int(ans[i])!=int(ans[ans.size()-1-i]))
            {
                return false;
            }
        }
        return true;
    }
};