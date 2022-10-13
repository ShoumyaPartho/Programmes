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
	int n, x, ans = 0 ; cin >> n;
	priority_queue<int> a, b;

	for (int i = 1; i <= n; i++) {
		cin >> x;
		a.push(x);
	}

	for (int i = 1; i <= n; i++) {
		cin >> x;
		b.push(x);
	}

	while (not a.empty()) {
		if (a.top() == b.top()) {
			a.pop();
			b.pop();
		}

		else if (a.top() > b.top()) {
			x = to_string(a.top()).size();
			a.pop();
			a.push(x);

			ans++;
		}

		else {
			x = to_string(b.top()).size();
			b.pop();
			b.push(x);

			ans++;
		}
	}

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