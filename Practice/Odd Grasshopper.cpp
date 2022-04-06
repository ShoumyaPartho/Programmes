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
	ll tc, x, n, mini, pos, sign; cin >> tc;

	while (tc--) {
		cin >> x >> n;

		if (not (n % 4))
			cout << x << endl;

		else {
			mini = (n / 4) * 4 + 1;

			if (x & 1ll) {
				pos = x + mini;

				if (pos & 1)
					sign = 1;

				else
					sign = -1;
			}

			else {
				pos = x - mini;

				if (pos & 1)
					sign = 1;

				else
					sign = -1;
			}

			if (mini == n) { // n%4 ==1
				cout << pos << endl;
				continue;
			}
			mini++;
			pos += (mini * sign);

			if (pos & 1)
				sign = 1;

			else
				sign = -1;

			if (mini == n) { // n%4 == 2
				cout << pos << endl;
				continue;
			}
			mini++;
			pos += (mini * sign);

			if (pos & 1)
				sign = 1;

			else
				sign = -1;

			if (mini == n) { // n%4 == 3
				cout << pos << endl;
				continue;
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