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

	long long int tc, n, check;
	cin >> tc;
	while (tc--) {
		cin >> n;
		check = 0;

		for (auto i = 3; i <= 100000; i += 2) {
			if (n % i == 0) {
				check = 1;
				break;
			}
		}
		if (!check and n > 2 and n % 2 == 1) check = 1;
		cout << (check == 1 ? "YES\n" : "NO\n");
	}

	return 0;
}