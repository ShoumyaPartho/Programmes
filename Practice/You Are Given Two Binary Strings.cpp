#include<iostream>
#include<ctime>
#include<string>
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
	int tc, posx, posy; cin >> tc;
	while (tc--) {
		string x, y; cin >> x >> y;
		reverse(x.begin(), x.end()); reverse(y.begin(), y.end());
		for (int i = 0; i < y.size(); i++) {
			if (y[i] == '1') {
				posy = i; break;
			}
		}
		for (int i = 0; i < x.size(); i++) {
			if (x[i] == '1' and i >= posy) {
				posx = i; break;
			}
		}
		cout << (posx - posy) << endl;
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