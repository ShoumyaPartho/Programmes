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
	int n, left, right, cnt = 0; cin >> n;
	char seq[n + 10];

	for (int i = 1; i <= n; i++)
		cin >> seq[i];

	if (n == 1) {
		cout << 0 << " " << 1 << endl;
		return;
	}

	left = 1;

	for (int i = 2; i <= n; i++) {
		if (seq[left] == seq[i]) {
			cnt++;
			left = i + 1;
			i++;
		}

		else if (seq[left] == '(' and seq[i] == ')') {
			cnt++;
			left = i + 1;
			i++;
		}
	}

	cout << cnt << " " << n - left + 1 << endl;
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