#include <bits/stdc++.h>
using namespace std;

int main() {
 
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        int x = abs(a[0]);
        int cntGreater = 0;
        for (int i = 1; i < n; i++) {
            if (abs(a[i]) > x) cntGreater++;
        }

        int p = (n + 1) / 2;
        if (cntGreater >= p - 1) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
