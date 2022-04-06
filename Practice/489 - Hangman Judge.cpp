// Solved by: Shoumya

#include<iostream>
#include<ctime>
#include<vector>
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

bool isLetterRemain(string ans) {

	int cnt = 0;

	for (auto it : ans) {

		if (it >= 'a' and it <= 'z')
			cnt++;
	}

	return (cnt > 0);
}

void solve() {
	int round;

	while (cin >> round, round != -1) {

		cout << "Round " << round << endl;

		string ans, q;
		cin >> ans >> q;

		int cnt = 0, check, w, l;

		for (auto it : q) {

			check = w = l = 0;

			for (int i = 0; i < ans.size(); i++) {
				if (ans[i] == it) {

					ans[i] = '.';
					check = 1;
				}
			}

			if (check and (not isLetterRemain(ans))) {
				cout << "You win." << endl;
				w = 1;
				break;
			}

			if (not check) {

				cnt++;

				if (cnt == 7) {
					cout << "You lose." << endl;
					l = 1;
					break;
				}
			}
		}

		if (isLetterRemain(ans) and (not w) and (not l))
			cout << "You chickened out." << endl;
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