// Motivated from "Tourist" solution
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
	ll tc, n, a, b, ans; cin >> tc;

	while (tc--) {
		cin >> n;
		vector<ll> topic(n + 1, 0), difficulty(n + 1, 0), freqTopic(n + 1, 0), freqDifficulty(n + 1, 0);

		for (int i = 1; i <= n; i++) {
			cin >> topic[i] >> difficulty[i];
			freqTopic[topic[i]]++, freqDifficulty[difficulty[i]]++;
		}

		ans = (n * (n - 1) * (n - 2)) / 6ll;

		for (int i = 1; i <= n; i++)
			ans -= ((freqTopic[topic[i]] - 1) * (freqDifficulty[difficulty[i]] - 1));

		cout << ans << endl;
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