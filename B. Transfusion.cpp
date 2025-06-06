#include <bits/stdc++.h>
#define sqr(x) (x) * (x)
#define sz(x) (int)x.size()
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define prec(x) fixed<<setprecision(x)
#define testcase cout << "Case " << tc++ << ": "
#define sr ios_base::sync_with_stdio(false); cin.tie(nullptr)
using namespace std;
using ll = long long;
using ld = long double;
using ull = unsigned long long;
const ld PI = acos(-1.0);
const ll MOD = 1e9 + 7;
const ld EPS = 1e-9;
const ll N = 2e6 + 5;
int tc = 1;

void solve() {
    int n;
    cin >> n;
    vector<ll> a(n);
    for (ll &x : a) cin >> x;
    ll total = 0, sum_odd = 0, sum_even = 0;
    for (int i = 0; i < n; i++) {
        total += a[i];
        if ((i + 1) % 2) sum_odd += a[i];
        else sum_even += a[i];
    }
    if (total % n != 0) {
        cout << "NO\n";
        return;
    }
    ll X = total / n;
    int odd_cnt = (n + 1) / 2;
    int even_cnt = n / 2;
    if (sum_odd == odd_cnt * X && sum_even == even_cnt * X) 
        cout << "YES\n";
    else 
        cout << "NO\n";
}

int main() {
    sr;
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
