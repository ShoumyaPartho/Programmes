#include<iostream>
#include<algorithm>
using namespace std;

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int main() {
	fastIO();

	long long int tc, n, sum, temp, t;
	cin >> tc;
	while (tc--) {
		cin >> n;
		long long int ara[n];
		for (auto i = 0; i < n; i++) cin >> ara[i];
		sort(ara, ara + n);
		temp =  0, sum = 0;
		for (auto i = 1; i < n - 1; i++) {
			t = ara[i] - ara[0];
			if (t < 0) t *= (-1);
			temp += t;
			t = ara[n - 1] - ara[i];
			if (t < 0) t *= (-1);
			temp += t;
			t = ara[n - 1] - ara[0];
			if (t < 0) t *= (-1);
			temp += t;

			sum = max(sum, temp);
			temp = 0;
		}
		cout << sum << "\n";
	}

	return 0;
}