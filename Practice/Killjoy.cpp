// Solved by: Shoumya

#include<iostream>
#include<ctime>
#include<vector>
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
	int tc, n, x, dif, inf, difSum; cin >> tc;

	while (tc--) {

		cin >> n >> x; dif = inf = difSum = 0;
		vector<int> ara(n + 1, 0);

		for (int i = 1; i <= n; i++)
			cin >> ara[i];

		for (int i = 1; i <= n; i++)
			difSum += (ara[i] - x);

		for (int i = 2; i <= n; i++) {

			if (ara[i] != ara[i - 1] or ara[i] != x)
				dif++;

			if ((ara[i] == x) or (ara[i - 1] == x))
				inf++;
		}

		if (dif and inf)
			cout << 1 << endl;

		else if ((not dif) and inf)
			cout << 0 << endl;

		else if (difSum == 0)
			cout << 1 << endl;

		else
			cout << 2 << endl;
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