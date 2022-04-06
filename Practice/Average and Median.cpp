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

template<int n> ll pow10 = pow10 < n - 1 > * 10;
template<> ll pow10<0> = 1;

template<class T>

T maximize(vector<T> &ara) {
	T f = 0, g = 0, t;

	for (auto &i : ara) {
		t = max(f, g) + i;
		g = f;
		f = t;
	}

	return max(f, g);
}

template<class T, class F>

T binarySearchLambda(T low, T high, const F &check) {
	T ans;
	while (low <= high) {
		T mid = (low + high) >> 1;

		if (check(mid))
			ans = mid, low = mid + 1;

		else
			high = mid - 1;
	}

	return ans;
}

void solve() {
	int n; cin >> n;
	vector<int> ara(n, 0); vector<ll> tAra(n, 0);

	for (auto &x : ara)
		cin >> x;

	ll average = binarySearchLambda<ll>(0, pow10<12> +1, [&](const ll k) {
		for (auto i = 0; i < n; i++)
			tAra[i] = ara[i] * pow10<3> - k;

		return maximize(tAra) >= 0;
	});

	ll median = binarySearchLambda<int>(0, pow10<9> +1, [&](const int k) {
		for (auto i = 0; i < n; i++)
			tAra[i] = (ara[i] >= k ? 1 : -1);

		return maximize(tAra) > 0;
	});

	cout << setprecision(3) << fixed << average * 1.0 / pow10<3> << endl;
	cout << setprecision(0) << median << endl;
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







///////////////////     Practice mode submission ////////////////////

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
//     ios_base::sync_with_stdio(false);
//     cin.tie(0), cout.tie(0);

// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
// }

// template<int n> ll pow10 = pow10 < n - 1 > * 10;
// template<> ll pow10<0> = 1;

// template<class T>

// T maximize(vector<T> &ara) {
//     T f = 0, k = 0, len = ara.size(), temp;

//     for (int i = 1; i < len; i++) {
//         temp = max(f, k) + ara[i];
//         k = f;
//         f = temp;
//     }

//     return max(k, f);
// }

// template<class T, class F>

// T binarySearchLambda(T low, T high, vector<T> &ara, const F &check) {
//     T ans, mid;

//     while (low <= high) {
//         mid = (low + high) >> 1;

//         if (check(mid)) {
//             ans = mid;
//             low = mid + 1;
//         }

//         else
//             high = mid - 1;
//     }

//     return ans;
// }

// void solve() {
//     ll n, average, median; cin >> n;

//     vector<ll> ara(n + 1, 0), bara(n + 1, 0);

//     for (int i = 1; i <= n; i++)
//         cin >> ara[i];

//     average = binarySearchLambda<ll> (1, pow10<12> +1, ara, [&](const ll & k) {
//         for (int i = 1; i <= n; i++)
//             bara[i] = ara[i] * pow10<3> - k;

//         return (maximize(bara) >= 0);
//     });

//     median = binarySearchLambda<ll> (1, pow10<9> +1, ara, [&](const ll & k) {
//         for (int i = 1; i <= n; i++)
//             bara[i] = (ara[i] >= k ? 1 : -1);

//         return (maximize(bara) > 0);
//     });

//     cout << setprecision(3) << fixed << average * 1.0 / pow10<3> << endl;
//     cout << median << endl;
// }

// int main() {
//     fastIO();
//     clock_t start = clock();
//     // Write code here...

//     solve();

// #ifndef ONLINE_JUDGE
//     clock_t stop = clock(); cout.precision(3);
//     cout << fixed << "\n\nTime taken: " << (double)(stop - start) / CLOCKS_PER_SEC * 1000 << " seconds" << endl;
// #endif

//     return 0;
// }