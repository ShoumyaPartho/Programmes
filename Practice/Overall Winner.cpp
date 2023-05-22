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
	int n, flag = -1, cntT = 0, cntA = 0; cin >> n;
	string s; cin >> s;

	for (auto it : s) {
		if (it == 'A') {
			cntA++;

			if (cntA > cntT)
				flag = 1;
		}

		if (it == 'T') {
			cntT++;

			if (cntT > cntA)
				flag = 2;
		}
	}

	if (cntA > cntT)
		cout << 'A' << endl;

	else if (cntA < cntT)
		cout << 'T' << endl;

	else if (flag == 1)
		cout << 'A' << endl;

	else
		cout << 'T' << endl;
}

int main() {
	fastIO();

	solve();

	return 0;
}