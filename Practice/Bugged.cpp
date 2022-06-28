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
	int n, sum = 0, temp; cin >> n;
	vector<int> ara(n + 1, 0);

	for (int i = 1; i <= n; i++) {
		cin >> ara[i];
		sum += ara[i];
	}

	if (sum % 10)
		cout << sum << endl;

	else {
		sort(ara.begin(), ara.end()); temp = -1;

		for (int i = 1; i <= n; i++) {
			if (ara[i] % 10) {
				temp = ara[i];
				break;
			}
		}

		if (temp == -1)
			cout << 0 << endl;

		else
			cout << sum - temp << endl;
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