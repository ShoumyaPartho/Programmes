#include<iostream>
#include<ctime>
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
	int tc, n; cin >> tc;
	while (tc--) {
		cin >> n; int ara[n + 1] = {0};
		for (int i = 1; i <= n; i++) cin >> ara[i];
		if (n == 1) {
			if (ara[1] % 2 == 1)
				cout << "-1\n";
			else
				cout << 1 << endl << 1 << endl;
		}
		else {
			if (ara[1] % 2 == 0)
				cout << 1 << endl << 1 << endl;
			else if (ara[2] % 2 == 0)
				cout << 1 << endl << 2 << endl;
			else if ((ara[1] + ara[2]) % 2 == 0)
				cout << 2 << endl << 1 << " " << 2 << endl;
		}
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