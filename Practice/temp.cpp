// Solved by: Shoumya

#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long int

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

void solve() {
    ll a, b, c, d; cin >> a >> b >> c >> d;
    if (a == 0) {
        cout << 1 << endl;
        return;
    }
    ll ans = a + (min(b, c) * 2) + min (a + 1, max(b, c) - min(b, c) + d);
    cout << ans << endl;
}

int main() {
    fastIO();

    // solve();

    int tc, t; cin >> t;

    for (tc = 1; tc <= t; tc++) {
        // cout<<"Case "<<tc<<": ";
        solve();
    }

    return 0;
}