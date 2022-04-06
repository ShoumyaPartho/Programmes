#include<iostream>
#include<ctime>
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
	int n; cin >> n; int ara[2 * n + 5], sum = 0, i, j;
	for (i = 1; i <= 2 * n; i++) cin >> ara[i];
	for (i = 1; i <= 2 * n; i++) {
		if (ara[i]) {
			for (j = i + 1; j <= 2 * n and ara[j] != ara[i]; j++) sum += (ara[j] > 0);
			ara[j] = 0;
		}
	}
	cout << sum << endl;
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