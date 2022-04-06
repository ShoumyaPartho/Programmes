#include<iostream>
using namespace std;

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int main() {
	fastIO();

	int tc, n, res, rem;
	cin >> tc;

	while (tc--) {
		cin >> n;
		res = n / 2020, rem = n % 2020;
		cout << (rem <= res ? "YES\n" : "NO\n");
	}

	return 0;
}