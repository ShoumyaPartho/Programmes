// Solved by: Shoumya

#include<bits/stdc++.h>
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

bool comp(pair<int, int> x1, pair<int, int> x2) {
	if (x1.first != x2.first)
		return x1.first < x2.first;

	return x1.second < x2.second;
}

int findMentor(vector<pair<int, int> > &sortedRating, int n, pair<int, int> i) {
	int ans = -1, low = 1, high = n, mid;

	while (low <= high) {
		mid = (low + high) >> 1;

		if (sortedRating[mid].first <= (i.first * 2)) {
			if (sortedRating[mid].second != i.second)
				ans = mid;

			if ((ans == -1 and mid != 1) or (ans > 0 and ans < mid))
				ans = mid - 1;

			low = mid + 1;
		}

		else
			high = mid - 1;
	}

	return (ans == -1 ? -1 : sortedRating[ans].first);
}

void solve() {
	int n, x; cin >> n;
	vector<pair<int, int> > rating(n + 1);
	rating[0] = {0, 0};

	for (int i = 1; i <= n; i++) {
		cin >> x;
		rating[i] = {x, i};
	}

	vector<pair<int, int> > sortedRating(rating);

	sort(sortedRating.begin() + 1, sortedRating.end(), comp);

	for (int i = 1; i <= n; i++)
		cout << findMentor(sortedRating, n, rating[i]) << " \n"[i == n];
}

int main() {
	fastIO();

	// solve();

	int tc, t; cin >> t;

	for (tc = 1; tc <= t; tc++) {
		cout << "Case #" << tc << ": ";
		solve();
	}

	return 0;
}