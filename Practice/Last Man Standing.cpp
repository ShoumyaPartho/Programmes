// Team Practice Contest 2021 (OCT-2)
// Problem No - J
// Problem Satement Understanding + Implementation + Observation
// KUET_NOOBS's and KUET_1001101_111's solution was followed

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
	ll n, sum = 0;
	cin >> n;
	vector<ll> ara(n + 1, 0);

	for (int i = 1; i <= n; i++) {
		cin >> ara[i];
		sum += ara[i];
	}

	if (sum <= (n - 1)) {
		cout << "YES" << endl;

		for (int i = n, j = n; i >= 1; i--) {
			while (ara[i]) {
				cout << i << " " << j << endl;
				ara[i]--;
				j--;
			}
		}
	}

	else
		cout << "NO" << endl;
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