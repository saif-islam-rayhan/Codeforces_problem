#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        long long m;
        cin >> n >> m;

        vector<pair<long long, int>> req(n);
        for (int i = 0; i < n; i++)
            cin >> req[i].first >> req[i].second;

        long long last_time = 0;
        int last_side = 0;
        long long ans = 0;

        for (int i = 0; i < n; i++) {
            long long a = req[i].first;
            int b = req[i].second;

            long long gap = a - last_time;
            ans += gap;

            long long current_side = (last_side + gap) % 2;
            if (current_side != b) ans--;

            last_time = a;
            last_side = b;
        }

        ans += (m - last_time);
        cout << ans << '\n';
    }
    return 0;
}
