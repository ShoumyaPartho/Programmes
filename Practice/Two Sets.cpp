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
	ll n, sum, tempSum = 0; cin >> n;
	vector<ll> lst1, lst2;

	sum = (n * (n + 1)) >> 1;
	if (sum & 1ll)
		cout << "NO\n";

	else {
		cout << "YES\n";
		sum >>= 1;

		vector<bool> flags(n + 1, true);

		for (int i = n; i; i--) {
			if ((tempSum + i) <= sum) {
				tempSum += i;
				flags[i] = false;
				lst1.push_back(i);

				if (tempSum == sum)
					break;
			}
		}

		for (int i = 1; i <= n; i++) {
			if (flags[i])
				lst2.push_back(i);
		}

		sort(lst1.begin(), lst1.end());

		cout << lst1.size() << endl;

		for (int i = 0; i < lst1.size(); i++)
			cout << lst1[i] << " \n"[i == lst1.size() - 1];

		cout << lst2.size() << endl;

		for (int i = 0; i < lst2.size(); i++)
			cout << lst2[i] << " \n"[i == lst2.size() - 1];
	}
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