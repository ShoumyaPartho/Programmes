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
	int n1, n2, n3, ans = 0; cin >> n1 >> n2 >> n3;
	map<int, int> mp; mp[0] = 3;
	vector<int> bricks(n1 + 1, 0);

	for (int i = n1; i >= 1; i--)
		cin >> bricks[i];

	for (int i = 1; i <= n1; i++) {
		bricks[i] += bricks[i - 1];
		mp[bricks[i]]++;
	}

	bricks.resize(n2 + 1, 0);

	for (int i = n2; i >= 1; i--)
		cin >> bricks[i];

	for (int i = 1; i <= n2; i++) {
		bricks[i] += bricks[i - 1];
		mp[bricks[i]]++;
	}

	bricks.resize(n3 + 1, 0);

	for (int i = n3; i >= 1; i--)
		cin >> bricks[i];

	for (int i = 1; i <= n3; i++) {
		bricks[i] += bricks[i - 1];
		mp[bricks[i]]++;
	}

	for (auto i : mp) {
		if (i.second == 3)
			ans = i.first;
	}

	cout << ans << endl;
}

int main() {
	fastIO();

	// solve();

	int tc, t = 1; // cin>>t;

	for (tc = 1; tc <= t; tc++) {
		// cout<<"Case "<<tc<<": ";
		solve();
	}

	return 0;
}