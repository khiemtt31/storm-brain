#include <iostream>
#include <vector>

using namespace std;

int get_b(long long n, long long p) {
    long long low = 1, high = n;
    while (low < high) {
        long long mid = (low + high + 1) / 2;
        if (mid * (mid + 1) / 2 <= p) low = mid;
        else high = mid - 1;
    }
    long long k = low;
    long long prev_len = (k - 1) * k / 2;
    long long offset = p - prev_len;
    return offset + 1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    for (int test = 0; test < t; test++) {
        int n, m;
        cin >> n >> m;
        vector<int> a(m);
        for (int i = 0; i < m; i++) cin >> a[i];
        long long total_len = (long long)n * (n + 1) / 2;
        long long ans = 0;
        vector<long long> candidates;
        for (int k = a[0]; k <= n; k++) {
            long long prev_len = (long long)(k - 1) * k / 2;
            long long p = prev_len + a[0] - 1;
            if (p + m - 1 < total_len) {
                candidates.push_back(p);
            }
        }
        for (auto p : candidates) {
            bool match = true;
            for (int i = 0; i < m; i++) {
                long long pp = p + i;
                int val = get_b(n, pp);
                if (val != a[i]) {
                    match = false;
                    break;
                }
            }
            if (match) ans++;
        }
        cout << ans << '\n';
    }
    return 0;
}