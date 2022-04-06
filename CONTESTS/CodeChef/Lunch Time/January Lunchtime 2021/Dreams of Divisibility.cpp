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

int ara[100005];

int main() {
	fastIO();

	int tc, n, k, temp;
	cin >> tc;
	while (tc--) {
		cin >> n >> k;
		int arra[n + 5] = {0}, possible = 1;
		for (int i = 0; i < 100005; i++) ara[i] = -1;
		for (int i = 0; i < n; i++) {
			cin >> arra[i];
			arra[i] %= k;
			ara[arra[i]]++;
		}
		for (int i = 0; i < n; i++) {
			if (arra[i] % k) {
				temp = k - (arra[i] % k);
				if (ara[temp] == -1) {
					possible = 0;
					break;
				}
			}
		}
		cout << (possible ? "YES\n" : "NO\n");
	}

	return 0;
}