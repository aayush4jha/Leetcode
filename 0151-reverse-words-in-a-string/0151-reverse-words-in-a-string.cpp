class Solution {
public:
    string reverseWords(string s) {
        vector<string> result;
        string ans, finalAns;
        for(char c: s)
        {
            if(c!=' ')
            {
                ans+=c;
            }
            else
            {
                if(!ans.empty())
                {
                    result.push_back(ans);
                    ans.clear();
                }
            }
        }
        if(!ans.empty())
        {
            result.push_back(ans);
        }
        reverse(result.begin(), result.end());
        for(int i=0;i<result.size();i++)
        {
            finalAns+=result[i];
            if(i!=result.size()-1) finalAns+=" ";
        }
        return finalAns;
    }
};