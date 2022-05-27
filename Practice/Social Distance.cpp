// Solved by: Shoumya

#include<iostream>
#include<ctime>
#include<vector>
#include<algorithm>
#include<iomanip>
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
	ll tc, n, m, cnt, flag; cin >> tc;

	while (tc--) {
		cin >> n >> m;

		vector<ll> chairs(n);

		for (auto &i : chairs)
			cin >> i;

		if (n >= m) {
			cout << "NO" << endl;
			continue;
		}

		sort(chairs.begin(), chairs.end());

		cnt = (chairs[0] << 1) | 1; flag = 1;

		for (int i = 1; i < n; i++) {
			if (cnt > m) {
				flag = 0;
				break;
			}

			if (chairs[i] >= chairs[i - 1])
				cnt += (chairs[i] - chairs[i - 1]);

			++cnt;

			if (i != (n - 1))
				cnt += chairs[i];

			else {
				if (cnt > m) {
					flag = 0;
					break;
				}

				if (not (((m - cnt) >= chairs[i]) or ((m - cnt + chairs[0]) >= chairs[i]))) {
					flag = 0;
					break;
				}
			}
		}

		cout << (flag ? "YES" : "NO") << endl;
	}
}

int main() {
	fastIO();
	clock_t start = clock();
	// Write code here...

	solve();

#ifndef ONLINE_JUDGE
	clock_t stop = clock(); cout.precision(3);
	cout << fixed << "\n\nTime taken: " << (double)(stop - start) / CLOCKS_PER_SEC * 1000 << " seconds" << endl;
#endif

	return 0;
}