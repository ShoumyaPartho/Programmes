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

	int tc, n, num, odd;
	cin >> tc;

	while (tc--) {
		cin >> n;
		odd = 0;

		while (n--) {
			cin >> num;
			if (num % 2 == 1) odd++;
		}
		cout << (odd & 1 ? "2\n" : "1\n");
	}

	return 0;
}