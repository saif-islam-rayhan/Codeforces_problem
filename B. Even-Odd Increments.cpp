#include <bits/stdc++.h>

#define sqr(x)        (x) * (x)
#define sz(x)         (int)x.size()
#define all(x)        (x).begin(),(x).end()
#define rall(x)       (x).rbegin(),(x).rend()
#define prec(x)       fixed<<setprecision(x)
#define testcase      cout << "Case " << tc++ << ": "
#define sr      ios_base::sync_with_stdio(false); cin.tie(nullptr)

using namespace std;

using ll = long long;
using ld = long double;
using ull = unsigned long long;
const ld PI = acos(-1.0);
const ll MOD = 1e9 + 7;
const ld EPS = 1e-9;
const ll N = 2e5 + 5;
int tc = 1;

///...(__________________________(mdrayhan75)____________________________)...///

void solve() {
    int n, q;
    cin >> n >> q;

    vector<ll> a(n);
    ll total = 0;
    int evenCount = 0, oddCount = 0;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        total += a[i];
        if (a[i] % 2 == 0) evenCount++;
        else oddCount++;
    }

    while (q--) {
        int type;
        ll x;
        cin >> type >> x;

        if (type == 0) {
            total += x * evenCount;
            if (x % 2 == 1) {
                oddCount += evenCount;
                evenCount = 0;
            }
        } else {
            total += x * oddCount;
            if (x % 2 == 1) {
                evenCount += oddCount;
                oddCount = 0;
            }
        }
        cout << total << '\n';
    }
}

int main() {
    sr;

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
