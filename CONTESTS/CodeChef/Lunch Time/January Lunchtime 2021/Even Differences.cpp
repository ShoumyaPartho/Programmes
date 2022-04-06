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

	int tc, n;
	cin >> tc;
	while (tc--) {
		cin >> n;
		int ara[n + 5], odd = 0, even = 0;
		for (auto i = 0; i < n; i++) {
			cin >> ara[i];
			if (ara[i] % 2 == 0) odd++;
			else even++;
		}
		cout << min(odd, even) << "\n";
	}


	return 0;
}