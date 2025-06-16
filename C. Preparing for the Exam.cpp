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
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(m), q(k);
    for (int &x : a) cin >> x;
    for (int &x : q) cin >> x;
    vector<bool> know(n+1, false);
    for (int x : q) know[x] = true;
    vector<int> unknown;
    for (int i = 1; i <= n; i++) {
        if (!know[i]) unknown.push_back(i);
    }
    int u = sz(unknown);
    if (u == 0) {
        for (int i = 0; i < m; i++) cout << '1';
        cout << '\n';
    } else if (u >= 2) {
        for (int i = 0; i < m; i++) cout << '0';
        cout << '\n';
    } else {
        int x = unknown[0];
        for (int v : a) {
            cout << (v == x ? '1' : '0');
        }
        cout << '\n';
    }
}

int main() {
    sr;
    int T;
    cin >> T;
    while (T--) solve();
    return 0;
}
