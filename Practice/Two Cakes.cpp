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
	int n, a, b, plates, minCake = 0, t1, t2; cin >> n >> a >> b;

	if (n == (a + b)) cout << 1 << endl;

	else {

		for (int i = 1; i < n; i++) {
			t1 = a / i;
			t2 = b / (n - i);
			plates = min(t1, t2);
			minCake = max(minCake, plates);
		}
		cout << minCake << endl;
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