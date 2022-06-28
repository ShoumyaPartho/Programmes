// Solved by: Shoumya

#include<bits/stdc++.h>
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

int sum;

vector<int> getFacts(int n) {
	sum = 0;
	vector<int> fact;

	for (int i = 2; i <= sqrt(n); i++) {

		while (n % i == 0) {
			fact.push_back(i);
			sum += i;
			n /= i;
		}
	}

	if (n > 1) {
		sum += n;
		fact.push_back(n);
	}

	return fact;
}

void solve() {
	int n, cnt;

	while (1) {
		cin >> n;

		if (n == 4)
			break;

		cnt = 0;

		while (1) {
			cnt++;
			vector<int> fact = getFacts(n);

			if (fact.size() == 1) {
				cout << fact[0] << " " << cnt << endl;
				break;
			}

			n = sum;
		}
	}
}

int main() {
	fastIO();

	// solve();

	int tc, t = 1; // cin>>t;

	for (tc = 1; tc <= t; tc++) {
		// cout<<"Case "<<tc<<": ";
		solve();
	}

	return 0;
}