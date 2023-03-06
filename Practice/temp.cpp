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
    int n, mod =  998244353; cin >> n;
    int data[n + 3][3], dp[n + 3][3];
    memset(dp, 0, sizeof(dp)); dp[1][1] = dp[1][2] = 1;

    for (int i = 1; i <= n; i++)
        cin >> data[i][1] >> data[i][2];

    for (int i = 2; i <= n; i++) {
        if (data[i][1] != data[i - 1][1])
            dp[i][1] = ((dp[i][1] % mod) + (dp[i - 1][1] % mod)) % mod;

        if (data[i][1] != data[i - 1][2])
            dp[i][1] = ((dp[i][1] % mod) + (dp[i - 1][2] % mod)) % mod;

        if (data[i][2] != data[i - 1][1])
            dp[i][2] = ((dp[i][2] % mod) + (dp[i - 1][1] % mod)) % mod;

        if (data[i][2] != data[i - 1][2])
            dp[i][2] = ((dp[i][2] % mod) + (dp[i - 1][2] % mod)) % mod;
    }

    cout << ((dp[n][1] + dp[n][2]) % mod) << endl;
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