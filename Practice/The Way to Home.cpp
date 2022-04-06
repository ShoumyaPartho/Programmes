#include<iostream>
#include<ctime>
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
	int n, d, pos = 1, cnt = 0, check = 0, temPos; cin >> n >> d;
	string s; cin >> s;
	s = "-" + s;
	while (true) {
		temPos = min(n, pos + d);
		if (temPos == n) {
			cout << cnt + 1 << endl;
			break;
		}
		else {
			for (int j = temPos; j >= pos; j--) {
				if (j == pos) {
					check = 1;
					break;
				}
				else if (s[j] == '1') {
					pos = j;
					cnt++;
					break;
				}
			}
		}
		if (check) {
			cout << "-1\n";
			break;
		}
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