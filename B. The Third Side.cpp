#include <bits/stdc++.h>

#define sqr(x)        (x) * (x)
#define sz(x)         (int)x.size()
#define all(x)        (x).begin(), (x).end()
#define rall(x)       (x).rbegin(), (x).rend()
#define prec(x)       fixed << setprecision(x)
#define testcase      cout << "Case " << tc++ << ": "
#define sr            ios::sync_with_stdio(false); cin.tie(nullptr)

using namespace std;

using ll  = long long;
using ld  = long double;
using ull = unsigned long long;
int tc = 1;

///...(__________________________(mdrayhan75)____________________________)...///
void solve() {
    int n;
    cin >> n;
    ll sum = 0;
    for (int i = 0, x; i < n; i++) {
        cin >> x;
        sum += x;
    }
    // Each merge reduces total by exactly 1 when choosing x = a_i + a_j - 1.
    // After n-1 merges, final = sum - (n-1).
    cout << (sum - (n - 1)) << "\n";
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
