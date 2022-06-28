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
    ll n, m; cin >> n >> m;

    if (n == 1 and m == 1)
        cout << 1 << endl;

    else if (n == 1 or m == 1) {
        if (n == 1)
            cout << m - 2 << endl;

        else if (m == 1)
            cout << n - 2 << endl;
    }

    else
        cout << (n - 2)*(m - 2) << endl;
}

int main() {
    fastIO();

    // solve();

    int tc, t = 1; // cin>>t;

    for (tc = 1; tc <= t; tc++) {
        // cout<<"Case "<<tc<<": ";
        solve();
    }

    return 0;
}