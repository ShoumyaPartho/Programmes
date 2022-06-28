// Solved by: Shoumya

#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long int
const int lim = 1e4;

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

class nums {
public:
	int x, y;
	bool operator<(nums n) {
		return ((x < n.x) or (x == n.x and y < n.y));
	}
};

void solve() {
	int n, p = 0, flag = 1; cin >> n;
	int x[lim + 10], y[lim + 10];
	nums num[n + 1];

	for (int i = 1; i <= n; i++)
		cin >> num[i].x;

	for (int i = 1; i <= n; i++)
		cin >> num[i].y;

	for (int i = 1; i <= n; i++) {
		for (int j = i + 1; j <= n; j++) {
			if (num[j] < num[i]) {
				x[++p] = i, y[p] = j;
				swap(num[i], num[j]);
			}
		}
	}

	for (int i = 1; i < n; i++) {
		if (num[i].y > num[i + 1].y) {
			flag = 0;
			break;
		}
	}

	if (not flag)
		cout << -1 << endl;

	else {
		cout << p << endl;

		for (int i = 1; i <= p; i++)
			cout << x[i] << " " << y[i] << endl;
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