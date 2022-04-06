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

ll NOD(int n) {
	ll ans = 1, cnt = 0;

	while (n % 2 == 0) {
		n /= 2;
		cnt++;
	}

	ans *= (cnt + 1);

	for (int i = 3; i * i <= n; i += 2) {
		if (n % i == 0) {
			cnt = 0;

			while (n % i == 0) {
				n /= i;
				cnt++;
			}

			ans *= (cnt + 1);
		}
	}

	if (n > 1)
		ans *= 2;

	return ans;
}

void solve() {
	int tc, n; cin >> tc;

	while (tc--) {
		cin >> n;

		if (n == 2) {
			cout << 1 << endl;
			continue;
		}

		cout << NOD(n - 1) << endl;
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