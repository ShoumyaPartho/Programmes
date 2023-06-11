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
	int n, flag = 1; cin >> n;
	string a, b; cin >> a >> b;

	for (int i = 0; i < n; i++) {
		char cl = min(a[i], b[i]), ch = max(a[i], b[i]);

		if (not (cl == ch or (cl == '0' and ch == 'o') or (cl == '1' and ch == 'l'))) {
			flag = 0;
			break;
		}
	}

	cout << (flag ? "Yes" : "No") << endl;
}

int main() {
	fastIO();

	solve();

	return 0;
}