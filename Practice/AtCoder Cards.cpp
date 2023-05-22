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
	string s, t; cin >> s >> t;
	int cntS[30] = {0}, cntT[30] = {0}, atS = 0, atT = 0, req, flag = 1, len = s.size();

	for (int i = 0; i < len; i++) {
		if (s[i] >= 'a' and s[i] <= 'z')
			cntS[s[i] - 'a' + 1]++;

		else
			atS++;

		if (t[i] >= 'a' and t[i] <= 'z')
			cntT[t[i] - 'a' + 1]++;

		else
			atT++;
	}

	for (int i = 1; i < 27; i++) {
		if (cntS[i] < cntT[i]) {
			req = cntT[i] - cntS[i];
			char c = 'a' + i - 1;

			if ((atS < req) or (not (c == 'a' or c == 't' or c == 'c' or c == 'o' or c == 'd' or c == 'e' or c == 'r'))) {
				flag = 0;
				break;
			}

			atS -= req;
		}

		if (cntS[i] > cntT[i]) {
			req = cntS[i] - cntT[i];
			char c = 'a' + i - 1;

			if ((atT < req) or (not (c == 'a' or c == 't' or c == 'c' or c == 'o' or c == 'd' or c == 'e' or c == 'r'))) {
				flag = 0;
				break;
			}

			atT -= req;
		}
	}

	cout << (flag ? "Yes" : "No") << endl;
}

int main() {
	fastIO();

	solve();

	return 0;
}