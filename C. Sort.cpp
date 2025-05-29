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
    int n, q;
    cin >> n >> q;
    string a, b;
    cin >> a >> b;
    vector<array<int,26>> pA(n+1), pB(n+1);
    for(int i = 1; i <= n; i++){
        pA[i] = pA[i-1];
        pB[i] = pB[i-1];
        pA[i][a[i-1]-'a']++;
        pB[i][b[i-1]-'a']++;
    }
    while(q--){
        int l, r;
        cin >> l >> r;
        int ops = 0;
        for(int c = 0; c < 26; c++){
            int ca = pA[r][c] - pA[l-1][c];
            int cb = pB[r][c] - pB[l-1][c];
            if(cb > ca) ops += (cb - ca);
        }
        cout << ops << "\n";
    }
}

int main(){
    sr;
    int T;
    cin >> T;
    while(T--) solve();
    return 0;
}
