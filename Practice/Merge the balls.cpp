// Solved by: Shoumya

#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long int
const ll lim = 2e+5;

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

void solve() {
	ll n, idx = 0, ptr = 0, x; cin >> n;
	ll ara[lim] = {0};

	for (int i = 1; i <= n; i++) {
		cin >> x;

		if (not idx) {
			idx++; ptr = idx;
			ara[idx] = x;
			continue;
		}


		if (x == ara[idx]) {
			ptr = idx;
			while (1) {
				if (x == ara[ptr]) {
					ara[ptr]++;
					x = ara[ptr];
					idx = ptr; ptr--;

					if (idx <= 1)
						break;
				}

				else {
					ptr = idx;
					break;
				}
			}
		}

		else {
			idx++; ptr = idx;
			ara[idx] = x;
		}
	}

	cout << idx << endl;
}

int main() {
	fastIO();

	solve();

	return 0;
}