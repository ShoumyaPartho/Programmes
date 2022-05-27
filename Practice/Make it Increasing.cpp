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
	ll n, ans = 1e18, tempAns, temp;
	cin >> n;
	vector<ll> ara(n + 1, 0);

	for (auto i = 1; i <= n; i++)
		cin >> ara[i];

	for (int idx = 1; idx <= n; idx++) {

		temp = tempAns = 0;

		for (int i = idx - 1; i; i--) {
			if (ara[i] == 1) {
				tempAns += temp + 1;
				temp += 1;
			}
			else {
				if (temp % ara[i] == 0) {
					tempAns += (temp / ara[i]) + 1;
					temp = temp + ara[i];
				}

				else {
					tempAns += (temp + ara[i] - 1) / ara[i];
					temp = ((temp + ara[i] - 1) / ara[i]) * ara[i];
				}
			}
		}

		temp = 0;

		for (int i = idx + 1; i <= n; i++) {
			if (ara[i] == 1) {
				tempAns += temp + 1;
				temp += 1;
			}
			else {
				if (temp % ara[i] == 0) {
					tempAns += (temp / ara[i]) + 1;
					temp = temp + ara[i];
				}

				else {
					tempAns += (temp + ara[i] - 1) / ara[i];
					temp = ((temp + ara[i] - 1) / ara[i]) * ara[i];
				}
			}
		}

		ans  = min(ans, tempAns);
	}

	cout << ans << endl;
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