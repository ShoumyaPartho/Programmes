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
	int n, cnt, cntTwo = 0, temp, x, ans = 0; cin >> n;
	vector<int> twos;

	for (int i = 1; i <= n; i++) {
		cin >> x; temp = x;

		while (temp % 2 == 0) {
			temp >>= 1;
			cntTwo++;
		}
	}

	if (cntTwo >= n) {
		cout << 0 << endl;
		return;
	}

	for (int i = n; i; i--) {
		if (i % 2 == 0) {
			cnt = 0, temp = i;

			while (temp % 2 == 0) {
				temp >>= 1;
				cnt++;
			}

			twos.push_back(cnt);
		}
	}

	sort(twos.begin(), twos.end(), greater<int>());

	for (auto it : twos) {
		ans++;
		cntTwo += it;

		if (cntTwo >= n) {
			cout << ans << endl;
			return;
		}
	}

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