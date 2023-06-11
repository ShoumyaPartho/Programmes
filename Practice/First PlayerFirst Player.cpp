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
	int n, mini = INT_MAX, idx; cin >> n;
	string name[n];
	vector<int> age(n, INT_MAX);

	for (int i = 0; i < n; i++) {
		cin >> name[i] >> age[i];

		if (age[i] < mini) {
			mini = age[i];
			idx = i;
		}
	}

	for (int i = idx, cnt = 0; cnt < n; i++, cnt++) {
		i %= n;
		cout << name[i] << endl;
	}
}

int main() {
	fastIO();

	solve();

	return 0;
}