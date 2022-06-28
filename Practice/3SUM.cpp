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
	int n, x, mp[20] = {0}; cin >> n;
	vector<int> v;

	for (int i = 1; i <= n; i++) {
		cin >> x;
		x %= 10;
		mp[x]++;
	}

	for (int i = 0; i <= 10; i++) {
		for (int j = 1; j <= min(3, mp[i]); j++)
			v.push_back(i);
	}

	for (int i = 0; i < v.size(); i++) {
		for (int j = i + 1; j < v.size(); j++) {
			for (int k = j + 1; k < v.size(); k++) {
				if ((v[i] + v[j] + v[k]) % 10 == 3) {
					cout << "YES" << endl;
					return;
				}
			}
		}
	}

	cout << "NO" << endl;
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