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
	ll tc, n, sum, cnt, tempSum; cin >> tc;
	double avg, tempAvg, x;

	while (tc--) {
		cin >> n; sum = tempSum = cnt = 0;
		vector<ll> ara(n + 1, 0);

		for (int i = 1; i <= n; i++) {
			cin >> ara[i];
			sum += ara[i];
		}

		x = tempAvg = sum * 1.0 / n;
		// cout << "HERE tempAvg = " << tempAvg << endl;

		for (int i = 1; i <= n; i++) {
			if (ara[i] * 1.0 > tempAvg) {
				sum -= ara[i];
				cnt++;
				tempSum += ara[i];
			}
		}

		if (cnt == n) {
			tempAvg = 0;
			avg = (tempSum) * 1.0 / (cnt);
		}
		else {
			tempAvg = (sum * 1.0) / (n - cnt);
			avg = ( tempAvg + tempSum) * 1.0 / (cnt + 1);
		}
		// cout << "HERE tempAvg = " << tempAvg << endl;

		// avg = ( tempAvg + tempSum) * 1.0 / (cnt + 1);

		cout << fixed << setprecision(6) << avg << endl;
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