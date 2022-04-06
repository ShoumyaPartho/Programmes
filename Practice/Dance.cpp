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

void findAns(vector<vector<int> > &pairs, vector<bool> &flags, const int n, int &ans, int temp, int cnt) {
	if (cnt == n) {
		ans = max(ans, temp);
		return;
	}

	int first;

	for (int i = 1; i <= 2 * n; i++) {
		if (not flags[i]) {
			first = i;
			break;
		}
	}

	for (int j = 1; j <= 2 * n; j++) {
		if (not flags[j] and j != first) {
			flags[first] = flags[j] = true;

			findAns(pairs, flags, n, ans, (temp ^ pairs[first][j]), cnt + 1);

			flags[first] = flags[j] = false;
		}
	}
}

void solve() {
	int n, x, ans = 0, temp = 0, cnt = 0; cin >> n;
	vector<bool> flags(2 * n + 1, false);
	vector<vector<int> > pairs(2 * n + 1, vector<int>(2 * n + 1, 0));

	for (int i = 1; i < 2 * n; i++) {
		for (int j = i + 1; j <= 2 * n; j++) {
			cin >> x;
			pairs[i][j] = pairs[j][i] = x;
		}
	}

	findAns(pairs, flags, n, ans, temp, cnt);

	cout << ans << endl;
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









//////////////////////////  Practice Moment Code   //////////////////////////////////



// // Solved by: Shoumya

// #include<iostream>
// #include<ctime>
// #include<vector>
// #include<algorithm>
// #include<iomanip>
// using namespace std;

// #define endl "\n"
// #define ll long long int

// void fastIO() {
// 	ios_base::sync_with_stdio(false);
// 	cin.tie(0), cout.tie(0);

// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif
// }

// void findAns(ll cntPair, vector<vector<ll> > &pairs, vector<bool> &flag, const ll n, ll &ans, ll temp ) {
// 	if (cntPair == n + 1 ) {
// 		ans = max(ans, temp);
// 		return;
// 	}

// 	ll small;

// 	for (int i = 1; i <= (n << 1); i++) {
// 		if (not flag[i]) {
// 			small = i;
// 			break;
// 		}
// 	}

// 	for (int i = 1; i <= (n << 1); i++) {
// 		if (i != small and (not flag[i])) {
// 			flag[small] = flag[i] = true;
// 			findAns(cntPair + 1, pairs, flag, n, ans, temp ^ pairs[small][i]);
// 			flag[small] = flag[i] = false;
// 		}
// 	}
// }

// void solve() {
// 	ll n, x, ans = 0; cin >> n;
// 	vector<vector<ll> > pairs((n << 1) | 1, vector<ll>((n << 1) | 1, 0));
// 	vector<bool> flag((n << 1) | 1, false);

// 	for (ll i = 1; i < (n << 1); i++) {
// 		for (ll j = i + 1; j <= (n << 1); j++) {
// 			cin >> x;
// 			pairs[i][j] = pairs[j][i] = x;
// 		}
// 	}

// 	findAns(1, pairs, flag, n, ans, 0);

// 	cout << ans << endl;
// }

// int main() {
// 	fastIO();
// 	clock_t start = clock();
// 	// Write code here...

// 	solve();

// #ifndef ONLINE_JUDGE
// 	clock_t stop = clock(); cout.precision(3);
// 	cout << fixed << "\n\nTime taken: " << (double)(stop - start) / CLOCKS_PER_SEC * 1000 << " seconds" << endl;
// #endif

// 	return 0;
// }