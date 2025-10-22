#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; 
    if (!(cin >> t)) return 0;
    while (t--) {
        int n; cin >> n;
        vector<int>a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];
        int mn = *min_element(a.begin(), a.end());
        int mx = *max_element(a.begin(), a.end());
        if ( (mn + mx) % 2 == 0 ) {
            cout << 0 << '\n';
            continue;
        }
        const int INF = 1e9;
        int ans = INF;
        for (int p = 0; p <= 1; ++p) {
            int mn_p = INF, mx_p = -INF;
            for (int x : a) if (x % 2 == p) {
                mn_p = min(mn_p, x);
                mx_p = max(mx_p, x);
            }
            if (mn_p == INF) continue; // no element of parity p
            int cnt = 0;
            for (int x : a) if (x >= mn_p && x <= mx_p) ++cnt;
            ans = min(ans, n - cnt);
        }
        // ans must be found (array non-empty), but just in case:
        if (ans == INF) ans = n; 
        cout << ans << '\n';
    }
    return 0;
}
