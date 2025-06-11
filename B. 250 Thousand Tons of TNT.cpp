#include <bits/stdc++.h>
#define sqr(x)        (x) * (x)
#define sz(x)         (int)x.size()
#define all(x)        (x).begin(),(x).end()
#define rall(x)       (x).rbegin(),(x).rend()
#define prec(x)       fixed<<setprecision(x)
#define testcase      cout << "Case " << tc++ << ":\n"
#define sr            ios_base::sync_with_stdio(false); cin.tie(nullptr)
using namespace std;
using ll = long long;
int tc = 1;

void solve() {
    int n;
    cin >> n;
    vector<ll> a(n), pref(n+1);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        pref[i+1] = pref[i] + a[i];
    }
    ll ans = 0;
    for (int k = 1; k*k <= n; k++) {
        if (n % k == 0) {
            // k
            {
                ll mn = LLONG_MAX, mx = LLONG_MIN;
                for (int i = k; i <= n; i += k) {
                    ll s = pref[i] - pref[i-k];
                    mn = min(mn, s);
                    mx = max(mx, s);
                }
                ans = max(ans, mx - mn);
            }
            int k2 = n / k;
            if (k2 != k) {
                ll mn = LLONG_MAX, mx = LLONG_MIN;
                for (int i = k2; i <= n; i += k2) {
                    ll s = pref[i] - pref[i-k2];
                    mn = min(mn, s);
                    mx = max(mx, s);
                }
                ans = max(ans, mx - mn);
            }
        }
    }
    cout << ans << "\n";
}

int main() {
    sr;
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
