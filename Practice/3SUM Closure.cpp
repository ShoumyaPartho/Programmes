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

void solve() {
	int n, neg = 0, pos = 0; cin >> n;
	vector<int> ara(n + 1, 0);

	for (int i = 1; i <= n; i++) {
		cin >> ara[i];

		if (ara[i] < 0)
			neg++;

		else if (ara[i] > 0)
			pos++;
	}

	if (neg > 2 or pos > 2) {
		cout << "NO" << endl;
		return;
	}

	sort(ara.begin() + 1, ara.end());

	if (n > 7) {
		ara[6] = ara[n - 1];
		ara[7] = ara[n];
		n = 7;
	}

	set<int> st;

	for (int i = 1; i <= n; i++)
		st.insert(ara[i]);

	for (int i = 1; i <= n; i++) {
		for (int j = i + 1; j <= n; j++) {
			for (int k = j + 1; k <= n; k++) {
				if (st.count(ara[i] + ara[j] + ara[k]) == 0) {
					cout << "NO" << endl;
					return;
				}
			}
		}
	}

	cout << "YES" << endl;
}

int main() {
	fastIO();

	// solve();

	int tc, t; cin >> t;

	for (tc = 1; tc <= t; tc++) {
		// cout<<"Case "<<tc<<": ";
		solve();
	}

	return 0;
}








// // Solved by: Shoumya

// #include<bits/stdc++.h>
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

// void solve() {
// 	ll n, neg = 0, pos = 0; cin >> n;
// 	vector<ll> nums(n + 1, 0), t;
// 	set<ll> st;

// 	for (int i = 1; i <= n; i++) {
// 		cin >> nums[i];

// 		if (nums[i] > 0)
// 			pos++;

// 		else if (nums[i] < 0)
// 			neg++;

// 		st.insert(nums[i]);
// 	}

// 	if (pos >= 3 or neg >= 3) {
// 		cout << "NO" << endl;
// 		return;
// 	}

// 	sort(nums.begin() + 1, nums.end());

// 	if (n <= 40) {

// 		for (int i = 1; i <= n; i++) {
// 			for (int j = i + 1; j <= n; j++) {
// 				for (int k = j + 1; k <= n; k++) {
// 					if (st.count(nums[i] + nums[j] + nums[k]) == 0) {
// 						cout << "NO" << endl;
// 						return;
// 					}
// 				}
// 			}
// 		}
// 		cout << "YES" << endl;
// 		return;
// 	}

// 	t.push_back(0);

// 	for (int i = 1; i <= 20; i++)
// 		t.push_back(nums[i]);

// 	for (int i = n - 19; i <= n; i++)
// 		t.push_back(nums[i]);

// 	for (int i = 1; i <= 40; i++) {
// 		for (int j = i + 1; j <= 40; j++) {
// 			for (int k = j + 1; k <= 40; k++) {
// 				if (st.count(t[i] + t[j] + t[k]) == 0) {
// 					cout << "NO" << endl;
// 					return;
// 				}
// 			}
// 		}
// 	}
// 	cout << "YES" << endl;
// 	return;
// }

// int main() {
// 	fastIO();

// 	// solve();

// 	int tc, t; cin >> t;

// 	for (tc = 1; tc <= t; tc++) {
// 		// cout<<"Case "<<tc<<": ";
// 		solve();
// 	}

// 	return 0;
// }