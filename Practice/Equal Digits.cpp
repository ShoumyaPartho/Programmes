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
	string a, b; cin >> a >> b;
	int lenA = a.size(), lenB = b.size();

	for (int i = 0;; i++) {
		if (i == lenA or i == lenB) {
			if (lenA == lenB)
				cout << a << "=" << b << endl;

			else if (lenA > lenB)
				cout << a << ">" << b << endl;

			else if (lenA < lenB)
				cout << a << "<" << b << endl;
			break;
		}

		if (a[i] > b[i]) {
			cout << a << ">" << b << endl;
			return;
		}

		if (a[i] < b[i]) {
			cout << a << "<" << b << endl;
			return;
		}
	}
}

int main() {
	fastIO();

	solve();

	return 0;
}