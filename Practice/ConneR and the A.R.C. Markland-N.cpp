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
	int tc, n, s, k, check, dif1, dif2; cin >> tc;
	while (tc--) {
		cin >> n >> s >> k; int ara[k + 1] = {0}, dif1 = dif2 = 1e9;
		for (int i = 1; i <= k; i++)
			cin >> ara[i];

		sort(ara + 1, ara + k + 1);

		for (int i = s; i >= max(s - 1000, 1); i--) {
			check = binary_search(ara + 1, ara + k + 1, i);
			if (not check) {
				dif1 = s - i;
				break;
			}
		}

		for (int i = s + 1; i <= min(s + 1000, n); i++) {
			check = binary_search(ara + 1, ara + k + 1, i);
			if (not check) {
				dif2 = i - s;
				break;
			}
		}

		cout << min(dif1, dif2) << endl;
	}
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