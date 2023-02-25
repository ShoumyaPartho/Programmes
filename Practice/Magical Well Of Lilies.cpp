// Solved by: Shoumya

#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long int
#define MAX 1e5

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

	vector<int> lili(MAX + 50, MAX + 40);
	lili[0] = 0, lili[1] = 1;

	for (int i = 2; i <= MAX + 5; i++) {
		lili[i] = min(lili[i], lili[i - 1] + 1);

		for (int j = i + i; j <= MAX + 5; j += i)
			lili[j] = min(lili[j], lili[i] + 4 + (j - i) / i * 2);
	}

	int tc, t, l; cin >> t;

	for (tc = 1; tc <= t; tc++) {
		cin >> l;
		cout << "Case #" << tc << ": " << lili[l] << endl;
	}

	return 0;
}