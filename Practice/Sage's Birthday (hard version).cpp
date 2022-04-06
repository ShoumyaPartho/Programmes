// Here repetition of ai is possible. So we need to implement greedy solution.
// Greedy method says we can place smaller numbers in even places so that when
// Bigger numbers take odd places then the answer becomes optimal. Because this
// may increase counter value but never decreases.
// Solved By: Shoumya

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

void solve() {

	int n; cin >> n; int ice[n + 1], fire[n + 1] = {0}, j = 0, cnt = 0;

	for (int i = 1; i <= n; i++)
		cin >> ice[i];

	sort(ice + 1, ice + n + 1);

	for (int i = 2; i <= n; i += 2)
		fire[i] = ice[++j];

	for (int i = 1; i <= n; i += 2)
		fire[i] = ice[++j];

	for (int i = 2; i < n; i++) {
		if (fire[i] < fire[i - 1] and fire[i] < fire[i + 1])
			cnt++;
	}

	cout << cnt << endl;

	for (int i = 1; i <= n; i++)
		cout << fire[i] << " \n"[i == n];
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