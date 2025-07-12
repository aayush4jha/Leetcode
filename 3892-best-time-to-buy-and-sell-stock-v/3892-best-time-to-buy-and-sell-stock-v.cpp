class Solution {
public:
    long long maximumProfit(vector<int>& p, int k) {
        int s = p.size();
        if (s < 2 || k == 0) return 0;
        return f(p, k, s);
    }

private:
    long long f(vector<int>& p, int k, int s) {
        vector<long long> a(s, 0);
        for (int i = 1; i <= k; ++i) {
            vector<long long> b = g(p, a, s);
            a = b;
        }
        return a[s - 1];
    }

    vector<long long> g(vector<int>& p, vector<long long>& a, int s) {
        vector<long long> b(s, 0);
        long long x = -1e18, y = -1e18;
        for (int i = 1; i < s; ++i) {
            long long z = (i > 1) ? a[i - 2] : 0;
            h(x, y, z, p[i - 1]);
            long long m = max(p[i] + x, -p[i] + y);
            b[i] = max(b[i - 1], m);
        }
        return b;
    }

    void h(long long& x, long long& y, long long z, int v) {
        x = max(x, z - v);
        y = max(y, z + v);
    }
};