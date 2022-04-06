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

	int tc, n, k;
	cin >> tc;

	while (tc--) {
		cin >> n >> k;

		if (k >= n) cout << (k + n - 1) / n << "\n";
		else if (n % k == 0) cout << "1\n";
		else cout << "2\n";
	}

	return 0;
}