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
    int n, x = 1; cin >> n;
    int ara[n], ele[n + 1], cnt;

    for (int i = 0; i < n; i++)
        cin >> ara[i];

    // sort(ara, ara + n);
    ele[1] = ara[0];

    for (int i = 1; i < n; i++) {
        if (ara[i - 1] != ara[i])
            ele[++x] = ara[i];
    }

    cnt = x;

    for (int i = 1; i < x - 1; i++) {
        if ((ele[i] < ele[i + 1]) and (ele[i + 1] < ele[i + 2]))
            cnt--;

        if ((ele[i] > ele[i + 1]) and (ele[i + 1] > ele[i + 2]))
            cnt--;
    }

    cout << cnt << endl;
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