// Solved by: Shoumya

#include<iostream>
#include<ctime>
#include<vector>
#include<string>
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
	ll tc, t, b, num; cin >> t;

	for (tc = 1; tc <= t; tc++) {
		string a; cin >> a >> b; num = 0, b = abs(b);
		cout << "Case " << tc << ": ";

		for (int i = (a[0] == '-' ? 1 : 0); i < a.size(); i++) {
			num *= 10;
			num += (a[i] - '0');
			num %= b;
		}

		cout << (num ? "not divisible" : "divisible") << endl;
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












// // Nice iteration technique

// #include<iostream>
// #include<ctime>
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
// 	ll tc, t, b, temp, i; cin >> t;
// 	for (tc = 1; tc <= t; tc++) {
// 		string a; cin >> a >> b;
// 		if (b < 0ll) b *= -1ll;
// 		cout << "Case " << tc << ": "; temp = 0;
// 		if (a[0] == '-') i = 1;
// 		else i = 0;

// 		for (; i < a.size(); i++) {
// 			temp *= 10; temp += (int) (a[i] - '0'); temp %= b;
// 		}
// 		if (temp) cout << "not divisible\n";
// 		else cout << "divisible\n";
// 	}
// }

// int main() {
// 	fastIO();
// 	clock_t start = clock();
// 	// Write code here...

// 	solve();

// #ifndef ONLINE_JUDGE
// 	clock_t stop = clock(); cout.precision(10);
// 	cout << "\n\nTime taken: " << (double)(stop - start) / CLOCKS_PER_SEC * 1000 << " seconds" << endl;
// #endif

// 	return 0;
// }