#include <bits/stdc++.h>
#define sqr(x) (x) * (x)
#define sz(x) (int)x.size()
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define prec(x) fixed<<setprecision(x)
#define testcase cout << "Case " << tc++ << ":\n"
#define sr ios_base::sync_with_stdio(false); cin.tie(nullptr)
using namespace std;
using ll = long long;
int tc = 1;

void solve() {
    int n;
    cin >> n;
    string b;
    cin >> b;
    set<char> st(all(b));
    vector<char> r(all(st));
    int k = sz(r);
    vector<char> mp(26);
    for (int i = 0; i < k; i++) {
        mp[r[i] - 'a'] = r[k - 1 - i];
    }
    for (char c : b) {
        cout << mp[c - 'a'];
    }
    cout << '\n';
}

int main() {
    sr;
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
