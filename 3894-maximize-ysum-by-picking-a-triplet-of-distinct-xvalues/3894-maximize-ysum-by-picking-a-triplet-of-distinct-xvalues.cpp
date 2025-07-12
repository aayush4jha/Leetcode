class Solution {
public:
    int maxSumDistinctTriplet(vector<int>& a, vector<int>& b) {
        unordered_map<int, int> m;
        m.reserve(a.size());
        for (int i = 0; i < a.size(); ++i) 
        {
            if (m.count(a[i]) == 0 || b[i] > m[a[i]]) 
            {
                m[a[i]] = b[i];
            }
        }
        if (m.size() < 3) 
        {
            return -1;
        }
        vector<int> v;
        v.reserve(m.size());
        for (const auto& p : m) 
        {
            v.push_back(p.second);
        }
        sort(v.rbegin(), v.rend());
        return v[0] + v[1] + v[2];
    }
};