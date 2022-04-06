// Solved by: Shoumya

#include<iostream>
#include<ctime>
#include<vector>
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
	int tc, t = 0, num, x, y; cin >> tc;

	while (tc--) {

		string s, temp;
		vector<string> inDeck, inHand;
		y = 0;

		for (int i = 1; i <= 52; i++) {

			cin >> s;

			if (i > 27)
				inHand.push_back(s);

			else
				inDeck.push_back(s);
		}

		for (int i = 1; i <= 3; i++) {

			temp = inDeck.back();
			inDeck.pop_back();

			if (temp[0] >= '2' and temp[0] <= '9') {
				y += temp[0] - '0';
				x = temp[0] - '0';
			}

			else {
				y += 10;
				x = 10;
			}

			for (int j = 1; j <= (10 - x); j++)
				inDeck.pop_back();
		}

		for (int i = 0; i < 25; i++)
			inDeck.push_back(inHand[i]);

		// cout << inDeck.size() << endl;

		cout << "Case " << ++t << ": " << inDeck[y - 1] << endl;
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