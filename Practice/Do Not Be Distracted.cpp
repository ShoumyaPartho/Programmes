// Solved by: Shoumya

#include<iostream>
#include<ctime>
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
	int tc, n, flag; cin >> tc;

	while (tc--) {
		cin >> n;
		string s; cin >> s;
		set<char> st; char curr = '-'; flag = 1;

		for (int i = 0; i < s.size(); i++) {
			if (st.count(s[i])) {
				if (s[i] == curr or curr == '-') {
					st.insert(s[i]);
					curr = s[i];
					continue;
				}
				flag = 0;
				break;
			}
			else {
				st.insert(s[i]);
				curr = s[i];
			}
		}
		if (flag)
			cout << "YES\n";
		else
			cout << "NO\n";
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