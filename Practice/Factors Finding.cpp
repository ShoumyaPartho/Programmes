// Solved by: Shoumya

#include<iostream>
#include<ctime>
#include<vector>
#include<algorithm>
#include<iomanip>
#include<cstring>
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
	int n, cnt = 0; cin >> n; int ara[n + 10];
	memset(ara, 0, sizeof(ara));

	for (int i = 1; i <= n; i++) {

		if (n % i == 0)
			ara[i] = ara[n / i] = 1;
	}

	for (int i = 1; i <= n; i++) {

		if (ara[i] == 1)
			cnt++;
	}

	cout << cnt << endl;

	for (int i = 1; i <= n; i++)
		if (ara[i] == 1)
			cout << i << " \n"[i == n];
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