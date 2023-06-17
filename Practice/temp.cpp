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
    int n; cin >> n;
    int l[n + 10], cnt, flag = 0;

    for (int i = 1; i <= n; i++)
        cin >> l[i];

    for (int i = 0; i <= n; i++) {
        cnt = 0 ;

        for (int j = 1; j <= n; j++) {
            if (l[j] > i)
                cnt++;
        }

        if (cnt == i) {
            cout << i << endl;
            flag = 1;
            break;
        }
    }

    if (not flag)
        cout << -1 << endl;
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