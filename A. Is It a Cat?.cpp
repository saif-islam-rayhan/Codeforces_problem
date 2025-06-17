#include <bits/stdc++.h>

#define sqr(x)        (x) * (x)
#define sz(x)         (int)x.size()
#define all(x)        (x).begin(),(x).end()
#define rall(x)       (x).rbegin(),(x).rend()
#define prec(x)       fixed<<setprecision(x)
#define testcase      cout << "Case " << tc++ << ": "
#define sr            ios::sync_with_stdio(false); cin.tie(nullptr)

using namespace std;

using ll  = long long;
using ld  = long double;
using ull = unsigned long long;
int tc = 1;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<char> seq = {'m','e','o','w'};
    int idx = 0;
    for (char c : s) {
        char lc = tolower(c);
        if (idx < 4 && lc == seq[idx]) {
            // ok in current group
        } else if (idx+1 < 4 && lc == seq[idx+1]) {
            idx++;
        } else {
            cout << "NO\n";
            return;
        }
    }
    if (idx == 3 && !s.empty()
        && tolower(s.front()) == 'm'
        && tolower(s.back()) == 'w') {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    sr;
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
