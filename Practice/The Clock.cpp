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
	int h1, h2, m1, m2, th1, th2, tm1, tm2, cnt = 0, x, carry;
	string s; cin >> s >> x;
	h1 = s[0] - '0', h2 = s[1] - '0', m1 = s[3] - '0', m2 = s[4] - '0';
	th1 = h1, th2 = h2, tm1 = m1, tm2 = m2;

	if (h1 == m2 and h2 == m1)
		cnt++;

	while (1) {
		for (int i = 1; i <= x; i++) {
			tm2++;

			if (tm2 == 10)
				tm2 = 0, carry = 1;

			else
				carry = 0;

			tm1 += carry;

			if (tm1 == 6)
				tm1 = 0, carry = 1;

			else
				carry = 0;

			th2 += carry;

			if (th2 == 10)
				th2 = 0, carry = 1;

			else
				carry = 0;

			th1 += carry; carry = 0;

			if (th1 == 2 and th2 == 4)
				th1 = 0, th2 = 0;
		}

		if (th1 == h1 and th2 == h2 and tm1 == m1 and tm2 == m2)
			break;

		if (th1 == tm2 and th2 == tm1)
			cnt++;
	}

	cout << cnt << endl;
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