#include <bits/stdc++.h>

#define sqr(x)        (x) * (x)
#define sz(x)         (int)x.size()
#define all(x)        (x).begin(),(x).end()
#define rall(x)       (x).rbegin(),(x).rend()
#define prec(x)       fixed<<setprecision(x)
#define testcase      cout << "Case " << tc++ << ": "
#define sr            ios_base::sync_with_stdio(false); cin.tie(nullptr)

using namespace std;

using ll  = long long;
using ld  = long double;
using ull = unsigned long long;
int tc = 1;

///...(__________________________(mdrayhan75)____________________________)...///
void solve() {
    int n, f, k;
    cin >> n >> f >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    int fav = v[f-1];
    int greater_count = 0, equal_count = 0;
    for (int x : v) {
        if (x > fav) greater_count++;
        else if (x == fav) equal_count++;
    }
    // If all positions up to k are filled by strictly greater => fav never removed
    if (greater_count >= k) {
        cout << "NO\n";
    }
    // If even the last equal finishes within k => always removed
    else if (greater_count + equal_count <= k) {
        cout << "YES\n";
    }
    else {
        cout << "MAYBE\n";
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
