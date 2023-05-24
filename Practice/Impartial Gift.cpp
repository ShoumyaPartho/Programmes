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
	int n, m, p = 1; cin >> n >> m;
	ll d, dif1, dif2, ans = -1, lo, hi, mid; cin >> d;
	vector<ll> a(n + 1), b(m + 1);

	for (int i = 1; i <= n; i++)
		cin >> a[i];

	for (int j = 1; j <= m; j++)
		cin >> b[j];

	sort(b.begin() + 1, b.end());

	for (int i = 1; i <= n; i++) {
		dif1 = a[i] + d, dif2 = a[i] - d, lo = 1, hi = m;

		while (lo <= hi) {
			mid = (lo + hi) / 2;

			if (b[mid] <= dif1) {
				if (b[mid] >= dif2)
					ans = max(ans, a[i] + b[mid]);
				lo = mid + 1;
			}

			else
				hi = mid - 1;
		}
	}

	cout << ans << endl;
}

int main() {
	fastIO();

	solve();

	return 0;
}