// Solved by: Shoumya

#include<iostream>
#include<ctime>
#include<vector>
#include<algorithm>
using namespace std;

#define endl "\n"
#define ll long long int

ll const nMAX = -(1e9 + 7);
ll const pMIN =   1e9 + 7 ;

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

void solve() {
	ll tc, n, pos, zero, neg, ans, x, negMax, posMin, minDif, idx, check; cin >> tc;

	while (tc--) {
		cin >> n; pos = zero = neg = ans =  0ll; negMax = nMAX, posMin = pMIN;
		vector<ll> ara(n + 1, 0);

		for (int i = 1; i <= n; i++) {
			cin >> x; ara[i] = x;

			if (x < 0ll) {
				neg++;
				negMax = max(negMax, x);
			}

			else if (x == 0ll)
				zero++;

			else {
				pos++;
				posMin = min(posMin, x);
			}
		}

		sort(ara.begin() + 1, ara.end());

		ans += neg;

		if (zero > 1)
			ans += zero;

		else if (neg or zero) {
			minDif = pMIN; idx = -1; check = 0;

			for (int i = 2; i <= n; i++) {
				if (ara[i] >= 0) {
					idx = i;
					break;
				}

				minDif = min(minDif, abs(ara[i - 1] - ara[i]));
			}

			if (minDif != pMIN and idx != -1) {

				for (int i = idx; i <= n; i++) {
					if (ara[i] > 0 and (ara[i] <= minDif)) {
						check = 1;
						break;
					}
				}
			}

			if (check and zero == 1)
				ans += 2;

			else if (check)
				ans++;
		}

		else
			ans += min(1ll, pos);

		cout << ans << endl;
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