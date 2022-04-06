#include<iostream>
#include<ctime>
#include<set>
#include<string>
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
	set<string> st;
	string s;
	int n, m; cin >> n >> m;

	for (int i = 0; i < (n + m); i++) {
		cin >> s;
		st.insert(s);
	}
	if ((n + m - st.size()) % 2) n++;

	cout << (n > m ? "YES\n" : "NO\n");
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