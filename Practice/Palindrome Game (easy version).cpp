// Solved by: Shoumya

#include<iostream>
#include<ctime>
#include<string>
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
	int tc, n, zero, one; cin >> tc;

	while (tc--) {
		cin >> n; zero = one = 0;
		string s; cin >> s;

		for (int i = 0; i < n; i++) {
			if (s[i] == '0')
				zero++;
			else
				one++;
		}

		if (zero and ((zero % 2) == 0 or zero == 1))
			cout << "BOB" << endl;

		else
			cout << "ALICE" << endl;
	}
}

int main() {
	fastIO();
	clock_t start = clock();
	// Write code here...

	solve();

#ifndef ONLINE_JUDGE
	clock_t stop = clock(); cout.precision(10);
	cout << "\n\nTime taken: " << (double)(stop - start) / CLOCKS_PER_SEC * 1000 << " seconds" << endl;
#endif

	return 0;
}