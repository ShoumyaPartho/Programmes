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
	ll n; cin >> n; ll ara[n + 1ll], enter = 1ll, temp;
	for (ll i = 1ll; i <= n; i++) {
		cin >> ara[i]; temp = ara[i];
		if (temp > 0 and temp % n == 0)  temp = n;
		else temp = temp % n;
		if (temp >= i) ara[i] = ((ara[i] + n - 1ll) / n) * n + i;
		else ara[i] = (ara[i] / n) * n + i;
	}
	// for (int i = 1ll; i <= n; i++) cout << ara[i] << " \n"[i == n];
	for (ll i = 2ll; i <= n; i++) {
		if (ara[i] < ara[enter]) enter = i;
	}
	cout << enter << endl;
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