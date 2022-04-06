// Team Practice Contest 2021 (OCT-2)
// Problem No - B
// Problem Satement Understanding + MATH (Diophantine Equation)
// Gonit Olympiad er prostuti - book was followed

// Solved by: Shoumya

#include<iostream>
#include<ctime>
#include<vector>
#include<cmath>
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
	ll n, x, gcd; cin >> n >> x;
	vector<ll> ara(n + 1);

	for (int i = 1; i <= n; i++)
		cin >> ara[i];

	gcd = ara[1];

	for (int i = 2; i <= n; i++)
		gcd = __gcd(gcd, ara[i]);

	if (abs(x) % gcd == 0)
		cout << "YES" << endl;

	else
		cout << "NO" << endl;
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