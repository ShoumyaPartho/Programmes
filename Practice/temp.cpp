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
    int n, k, idx = 1, totDam = 0; cin >> n >> k;
    pair<int, int> ara[n + 1];

    for (int i = 1; i <= n; i++)
        cin >> ara[i].second;

    for (int i = 1; i <= n; i++)
        cin >> ara[i].first;

    sort(ara + 1, ara + 1 + n);

    while (idx <= n) {
        totDam += k;

        for (auto i = idx; i <= n; i++) {
            if (ara[i].second > totDam) {
                idx = i;
                k -= ara[i].first;

                if (k < 0) {
                    cout << "NO" << endl;
                    return;
                }

                break;
            }

            else if (i == n) {
                cout << "YES" << endl;
                return;
            }
        }
    }
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





