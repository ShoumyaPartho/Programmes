#include<iostream>
#include<ctime>
#include<algorithm>
#include<set>
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
	ll n, k; cin >> n >> k; ll ara[n + 1];
	set<ll> st;

	for (int i = 1; i <= n; i++)
		cin >> ara[i];
	sort(ara + 1, ara + n + 1);

	for (int i = n; i > 0; i--) {
		if (not st.count(ara[i]*k))
			st.insert(ara[i]);
	}

	cout << st.size() << endl;
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