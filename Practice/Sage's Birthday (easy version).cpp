// Here all ai is distinct. So the Swapping method works perfectly fine.
// Soloved By: Shoumya

#include<iostream>
#include<ctime>
#include<algorithm>
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

void tutorialSolve(int n, int *ice) {

	for (int i = 1; i < n; i += 2)
		swap(ice[i], ice[i + 1]);

	for (int i = 1; i <= n; i++)
		cout << ice[i] << " \n"[i == n];
}

void mySolve(int n, int *ice) {

	for (int i = 1, j = (n / 2) + 1; j <= n; i++, j++) {

		cout << ice[j] << " \n"[j == n];

		if (i <= (n / 2))
			cout << ice[i] << " ";
	}
}

void solve() {

	int n; cin >> n; int ice[n + 1];

	for (int i = 1; i <= n; i++)
		cin >> ice[i];

	sort(ice + 1, ice + n + 1);
	cout << (n - 1) / 2 << endl;

	// tutorialSolve(n, ice);

	mySolve(n, ice);
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