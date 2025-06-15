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
    int t;
    cin >> t;
    while (t--) {
        ll x;
        cin >> x;
        if ((x & (x - 1)) == 0 || ((x + 1) & x) == 0) {
            cout << -1 << '\n';
        } else {
            ll h = 1LL << (63 - __builtin_clzll(x));
            cout << (h - 1) << '\n';
        }
    }
}

int main() {
    sr;
    solve();
    return 0;
}
