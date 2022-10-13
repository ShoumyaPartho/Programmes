// Solved by: Shoumya

#include<bits/stdc++.h>
using namespace std;

// #define endl "\n"
#define ll long long int

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

vector<int> getAra(int lo, int hi) {
	vector<int> ara;
	int x;
	cout << "? " << lo << " " << hi << endl;

	for (int i = lo; i <= hi; i++) {
		cin >> x;
		ara.push_back(x);
	}

	return ara;
}

void solve() {
	int n, lo, hi, mid, cnt; cin >> n;
	lo = 1, hi = n;

	while (lo <= hi) {
		mid = (lo + hi) >> 1;
		cnt = 0;
		vector<int> ara = getAra(lo, mid);

		for (auto x : ara) {
			if (x >= lo and x <= mid)
				cnt++;
		}

		if (cnt % 2)
			hi = mid - 1;

		else
			lo = mid + 1;
	}

	cout << "! " << lo << endl;
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