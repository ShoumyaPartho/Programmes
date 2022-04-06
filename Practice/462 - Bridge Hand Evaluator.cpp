// Solved by: Shoumya

#include<iostream>
#include<ctime>
#include<cstring>
#include<cstdio>
#include<vector>
#include<map>
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

	int cnt[5], points, specialPoints, maxi, idx;
	bool ace[5], king[5], queen[5], jack[5], trumps[5];
	string card, ansSuit = "0SHDC";
	map<char, int> suits;
	suits.insert({'S', 1}); suits.insert({'H', 2}); suits.insert({'D', 3}); suits.insert({'C', 4});

	while (cin >> card) {

		// initializing required fields;
		memset(ace, false, sizeof(ace));
		memset(king, false, sizeof(king));
		memset(queen, false, sizeof(queen));
		memset(jack, false, sizeof(jack));
		memset(trumps, false, sizeof(trumps));
		memset(cnt, 0, sizeof(cnt));
		points = specialPoints = 0;

		// Taking inputs and mapping with internal variables;
		for (int i = 1; i <= 13; i++) {

			if (i > 1)
				cin >> card;

			if (card[0] == 'A') {
				ace[suits[card[1]]] = true;
				points += 4;
			}

			if (card[0] == 'K') {
				king[suits[card[1]]] = true;
				points += 3;
			}

			if (card[0] == 'Q') {
				queen[suits[card[1]]] = true;
				points += 2;
			}

			if (card[0] == 'J') {
				jack[suits[card[1]]] = true;
				points++;
			}

			cnt[suits[card[1]]]++;
		}

		// Calculating final points and Trump-Bids
		for (int i = 1; i <= 4; i++) {

			if (ace[i])
				trumps[i] = true;

			if (king[i] and cnt[i] < 2)
				points--;

			else if (king[i])
				trumps[i] = true;

			if (queen[i] and cnt[i] < 3)
				points--;

			else if (queen[i])
				trumps[i] = true;

			if (jack[i] and cnt[i] < 4)
				points--;

			if (cnt[i] == 2)
				specialPoints++;

			else if (cnt[i] < 2)
				specialPoints += 2;
		}

		// Output actual answer
		if (points >= 16 and trumps[1] and trumps[2] and trumps[3] and trumps[4])
			cout << "BID NO-TRUMP\n";

		else if (points + specialPoints >= 14) {

			maxi = cnt[1], idx = 1;

			for (int i = 2; i <= 4; i++) {

				if (cnt[i] > maxi) {
					maxi = cnt[i];
					idx = i;
				}
			}

			cout << "BID " << ansSuit[idx] << endl;
		}

		else
			cout << "PASS\n";
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