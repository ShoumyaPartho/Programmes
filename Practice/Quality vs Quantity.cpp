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
	ll tc, n, i, j, s1, s2, flag; cin >> tc;

	while (tc--) {
		cin >> n; flag = 0;

		vector<ll> ara(n, 0);
		for (auto &i : ara)
			cin >> i;

		sort(ara.begin(), ara.end());

		s1 = ara[0] + ara[1], s2 = ara[n - 1]; i = 2, j = n - 2;

		while (1) {
			if (s1 < s2) {
				flag = 1;
				break;
			}

			if (i > j)
				break;

			if (i == j) {
				s1 += ara[i++];
				continue;
			}

			else {
				s1 += ara[i++];
				s2 += ara[j--];
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