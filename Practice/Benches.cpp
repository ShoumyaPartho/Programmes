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
	int n, m, maxi, mini; cin >> n >> m; int ara[n + 1]; ara[0] = 0;
	for (int i = 1; i <= n; i++)
		cin >> ara[i];
	sort(ara + 1, ara + n + 1); maxi = ara[n] + m;

	while (m) {
		ara[1]++; m--;
		sort(ara + 1, ara + n + 1);
	}
	mini = ara[n];
	cout << mini << " " << maxi << endl;
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