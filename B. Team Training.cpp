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
    int n;
    ll x;
    cin >> n >> x;

    vector<ll> a(n);
    for (auto &v : a) cin >> v;

    sort(rall(a)); // sort in decreasing order

    int teams = 0, members = 0;

    for (int i = 0; i < n; ++i) {
        members++;
        if (members * a[i] >= x) {
            teams++;
            members = 0;
        }
    }

    cout << teams << '\n';
}

int main() {
    sr;

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
