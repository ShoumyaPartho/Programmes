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
	int n, i, j, maxi = 1; cin >> n; int ara[n + 1];
	for (i = 1; i <= n; i++) cin >> ara[i];
	i = j = 1;
	for (j = 2; j <= n; j++) {
		if (ara[j] <= ara[j - 1]) {
			maxi = max(maxi, j - i);
			i = j;
		}
		else if (j == n) maxi = max(maxi, j - i + 1);
	}
	cout << maxi << endl;
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