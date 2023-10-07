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
	ll n, m, init, maxi, mini, tAns = 0, t1, t2; cin >> n >> m;
	ll a[n + 1], b[m + 1], cntA1[40] = {0}, cntA2[40] = {0};

	for (int i = 1; i <= n; i++) {
		cin >> a[i]; tAns ^= a[i];

		for (int j = 0; (1ll << j) <= a[i]; j++) {
			if (a[i] & (1ll << j)) {
				cntA1[j]++;
				cntA2[j]++;
			}
		}
	}

	maxi = mini = tAns;

	for (int i = 1; i <= m; i++) {
		cin >> b[i];
		t1 = maxi, t2 = mini;

		for (int j = 0; (1ll << j) <= b[i]; j++) {
			if (b[i] & (1ll << j)) {
				if ((cntA1[j] != -1) and (cntA1[j] % 2 == 0) and ((n - cntA1[j]) % 2 == 1)) {
					t1 += (1ll << j);
					cntA1[j] = -1;
				}

				if ((cntA2[j] != -1) and (cntA2[j] % 2 == 1) and ((n - cntA2[j]) % 2 == 1)) {
					t2 -= (1ll << j);
					cntA2[j] = -1;
				}
			}
		}

		maxi = max(maxi, t1);
		mini = min(mini, t2);
	}

	cout << mini << " " << maxi << endl;
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