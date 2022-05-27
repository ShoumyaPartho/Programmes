// Solved by: Shoumya

#include<iostream>
#include<ctime>
#include<vector>
#include<map>
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
	ll tc, n, pos1, pos2, sum; cin >> tc;

	while (tc--) {
		cin >> n;
		vector<ll> weights(n + 1, 0), left(n + 1, 0), right(n + 1, 0);
		map<ll, ll> track;

		for (int i = 1; i <= n; i++) {
			cin >> weights[i];
			left[i] = left[i - 1] + weights[i];
		}

		right[n] = weights[n]; sum = 0;
		track.insert({right[n], n});

		for (int i = n - 1; i; i--) {
			right[i] = right[i + 1] + weights[i];
			track.insert({right[i], i});
		}

		for (int i = 1; i <= n; i++) {
			if (track.count(left[i]) and track[left[i]] > i)
				sum = left[i];
		}

		if (not sum) {
			cout << sum << endl;
			continue;
		}

		else {
			for (int i = 1; i <= n; i++) {
				if (left[i] == sum) {
					pos1 = i;
					break;
				}
			}

			for (int i = n; i; i--) {
				if (right[i] == sum) {
					pos2 = (n - i + 1);
					break;
				}
			}

			cout << pos1 + pos2 << endl;
		}
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