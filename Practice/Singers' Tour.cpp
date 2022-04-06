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
	ll tc, n, flag; cin >> tc;

	while (tc--) {
		cin >> n;

		vector<ll> aara(n + 1, 0), bara(n + 1, 0);
		ll sum = 0, temp = (n * (n + 1)) >> 1, t1, t2;

		for (int i = 1; i <= n; i++) {
			cin >> bara[i];
			sum += bara[i];
		}

		if ((sum % temp) or (sum <= temp and n > 1)) { // Here corner case was missed for n==1.
			cout << "NO" << endl;
			continue;
		}

		sum /= temp, flag = 1;

		for (int i = 1; i <= n; i++) {
			t1 = bara[i];
			t2 = (i - 1 == 0 ? bara[n] : bara[i - 1]);

			aara[i] = sum - t1 + t2;

			if (aara[i] % n or aara[i] <= 0) { // Here a corner case was to be observed.
				flag = 0;					   // Here th subtraction could yield negative value.
				break;						   // which will eventually violate number range [1,n].
			}

			aara[i] /= n;
		}

		if (flag) {

			cout << "YES" << endl;

			for (int i = 1; i <= n; i++)
				cout << aara[i] << " \n"[i == n];
		}

		else
			cout << "NO" << endl;
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