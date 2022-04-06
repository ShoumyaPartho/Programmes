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
	vector<ll> ara(1e4 + 10, 0); ara[1] = 0, ara[2] = 6;
	ll n, diff = 8, difChng = 16, temp;

	for (int i = 3; i <= 1e4; i++) {
		// Calculating nC2 where n = i*i
		temp = i * i;
		temp = temp * (temp - 1);
		temp >>= 1;
		temp -= diff;
		diff += difChng;
		difChng += 8;
		ara[i] = temp;
	}

	cin >> n;

	for (int i = 1; i <= n; i++)
		cout << ara[i] << endl;
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