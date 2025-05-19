#include <bits/stdc++.h>

#define sqr(x)        (x) * (x)
#define sz(x)         (int)x.size()
#define all(x)        (x).begin(), (x).end()
#define rall(x)       (x).rbegin(), (x).rend()
#define prec(x)       fixed << setprecision(x)
#define testcase      cout << "Case " << tc++ << ": "
#define sr            ios_base::sync_with_stdio(false); cin.tie(nullptr)

using namespace std;

using ll = long long;
using ld = long double;
using ull = unsigned long long;
const ld PI = acos(-1.0);
const ll MOD = 1e9 + 7;
const ld EPS = 1e-9;
const ll N = 2e5 + 5;
int tc = 1;

void solve() {
    ll x, y;
    cin >> x >> y;

    ll full2 = y / 2;
    ll rem2  = y % 2;

    ll cap1 = full2 * 7 + rem2 * 11;

    ll screens = full2 + rem2;
    if (x > cap1) {
        ll need = x - cap1;
        screens += (need + 14) / 15;
    }

    cout << screens << "\n";
}

int main() {
    sr;
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}
