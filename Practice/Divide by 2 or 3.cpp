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
	ll n, gcd, t, cnt, ans = 0, flag = 1, num, curDivCnt, temp;
	cin >> n;
	vector<ll> nums(n + 1, 0);
	vector<pair<ll, ll> > gcdDivs;

	for (int i = 1; i <= n; i++)
		cin >> nums[i];

	gcd = nums[1];

	for (int i = 2; i <= n; i++)
		gcd = __gcd(nums[i], gcd);

	if (gcd == 1) {
		for (int i = 1; i <= n; i++) {
			for (int j = 2; j <= 3; j++) {
				while (nums[i] % j == 0) {
					nums[i] /= j;
					ans++;
				}
			}

			if (nums[i] > 3) {
				flag = 0;
				break;
			}
		}
		cout << (flag ? ans : -1) << endl;
		return;
	}

	temp = gcd;

	for (ll i = 2; i * i <= temp; i++) {
		cnt = 0;

		while (temp % i == 0) {
			temp /= i;
			cnt++;
		}

		if (cnt)
			gcdDivs.push_back({i, cnt});
	}

	if (temp > 1)
		gcdDivs.push_back({temp, 1});

	for (int i = 1; i <= n; i++) {
		temp = nums[i];

		for (int j = 0; j < (int) gcdDivs.size(); j++) {
			curDivCnt = 0, cnt = 0;

			while (temp % gcdDivs[j].first == 0) {
				temp /= gcdDivs[j].first;
				curDivCnt++;
			}

			if (gcdDivs[j].first > 3 and curDivCnt > gcdDivs[j].second) {
				flag = 0;
				break;
			}

			if (gcdDivs[j].first == 2 or gcdDivs[j].first == 3)
				ans += curDivCnt - gcdDivs[j].second;
		}

		if (temp) {
			cnt = 0;
			while (temp % 2 == 0) {
				temp /= 2;
				cnt++;
			}

			while (temp % 3 == 0) {
				temp /= 3;
				cnt++;
			}

			if (temp > 3)
				flag = 0;

			else
				ans += cnt;
		}

		if (not flag)
			break;
	}

	cout << (flag ? ans : -1) << endl;
}

int main() {
	fastIO();

	solve();

	return 0;
}