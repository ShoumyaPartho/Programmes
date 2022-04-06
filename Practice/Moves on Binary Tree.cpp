// Solved by: Shoumya

#include<iostream>
#include<ctime>
#include<vector>
#include<stack>
#include<algorithm>
#include<iomanip>
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
	ll n, x; cin >> n >> x;
	string s; cin >> s;
	stack<pair<char, int> > st;

	for (int i = n - 1; i >= 0; i--) {
		if (s[i] == 'U')
			st.push({'U', i});

		else if ((s[i] == 'L' or s[i] == 'R') and (not st.empty())) {
			s[i] = '-';
			s[st.top().second] = '-';
			st.pop();
		}
	}

	for (int i = 0; i < n; i++) {
		if (s[i] == 'L')
			x <<= 1;

		else if (s[i] == 'R')
			x = (x << 1) | 1ll;

		else if (s[i] == 'U')
			x >>= 1;
	}

	cout << x << endl;
}

int main() {
	fastIO();
	clock_t start = clock();
	// Write code here...

	solve();

#ifndef ONLINE_JUDGE
	clock_t stop = clock(); cout.precision(3);
	cout << fixed << "\n\nTime taken: " << (double)(stop - start) / CLOCKS_PER_SEC * 1000 << " seconds" << endl;
#endif

	return 0;
}