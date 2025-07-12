class Solution {
    static constexpr long long M = 1'000'000'007LL;

public:
    int goodSubtreeSum(vector<int>& a, vector<int>& b) {
        int n = a.size();
        vector<int> v(n, 0), p(n, 0);
        for (int i = 0; i < n; ++i) {
            v[i] = a[i];
            p[i] = b[i];
        }
        vector<vector<int>> g(n);
        for (int i = 1; i < n; ++i) g[p[i]].push_back(i);
        vector<long long> s(n, 0);

        function<vector<long long>(int)> f = [&](int u) {
            vector<long long> d(1024, -1);
            d[0] = 0;
            int m = 0;
            int x = v[u];
            while (x) {
                int d1 = x % 10;
                if (m & (1 << d1)) {
                    m = -1;
                    break;
                }
                m |= (1 << d1);
                x /= 10;
            }
            if (m >= 0) d[m] = v[u];
            for (int c : g[u]) {
                vector<long long> e = f(c);
                vector<long long> n1 = d;
                for (int i = 0; i < 1024; ++i) if (d[i] >= 0) {
                    for (int j = 0; j < 1024; ++j) if (e[j] >= 0 && (i & j) == 0) {
                        int k = i | j;
                        n1[k] = max(n1[k], d[i] + e[j]);
                    }
                }
                d.swap(n1);
            }
            long long b = 0;
            for (auto y : d) b = max(b, y);
            s[u] = b % M;
            return d;
        };

        f(0);
        long long t = 0;
        for (auto x : s) t = (t + x) % M;
        return (int)t;
    }
};