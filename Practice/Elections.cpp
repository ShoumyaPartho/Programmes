// Solved by: Shoumya

#include<iostream>
#include<ctime>
#include<vector>
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
	ll tc, allSame, maxi; cin >> tc;

	while (tc--) {
		vector<ll> ara(4, 0); allSame = 0;
		cin >> ara[1] >> ara[2] >> ara[3];

		if (ara[1] == ara[2] and ara[2] == ara[3])
			allSame = 1;

		if (allSame)
			cout << "1 1 1" << endl;

		else if ((ara[1] == ara[2] and ara[1] > ara[3]) or (ara[2] == ara[3] and ara[2] > ara[1]) or (ara[3] == ara[1] and ara[3] > ara[2])) {
			maxi = max(ara[1], max(ara[2], ara[3]));

			for (int i = 1; i <= 3; i++) {
				if (ara[i] == maxi)
					cout << 1;

				else
					cout << maxi - ara[i] + 1;

				cout << " \n"[i == 3];
			}
		}

		else {
			maxi = max(ara[1], max(ara[2], ara[3]));

			for (int i = 1; i <= 3; i++) {
				if (ara[i] == maxi)
					cout << 0;

				else
					cout << maxi - ara[i] + 1;

				cout << " \n"[i == 3];
			}
		}
	}
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