#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n;i++) cin >> a[i];

        vector<int> rem(n);
        vector<int> cnt(k, 0);
        for (int i = 0; i < n;i++) {
            rem[i] = a[i] % k;
            cnt[ rem[i] ]++;
        }

        int ans = -1;
        for (int i = 0; i < n; i++) {
            if (cnt[ rem[i] ] == 1) { 
                ans = i + 1; 
                break;
            }
        }

        if (ans == -1) cout << "NO\n";
        else {
            cout << "YES\n" << ans << "\n";
        }
    }
    return 0;
}
