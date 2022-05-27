// Solved by: Shoumya

#include<iostream>
#include<ctime>
#include<vector>
#include<string>
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

vector<int> pre;

bool comp(string &s1, string &s2) {
	int l1 = s1.size(), l2 = s2.size();

	for (int i = 0;; i++) {
		if (i == l1)
			return true;

		else if (i == l2)
			return false;

		if (pre[s1[i] - 'a' + 1] < pre[s2[i] - 'a' + 1])
			return true;

		else if (pre[s1[i] - 'a' + 1] > pre[s2[i] - 'a' + 1])
			return false;
	}

	return true;
}

void solve() {
	string s; cin >> s; pre.assign(30, 0);
	int pow, n, k;
	vector<string> vs;

	for (int i = 1; i <= 26; i++)
		pre[s[i - 1] - 'a' + 1] = ++pow;

	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> s;
		vs.push_back(s);
	}

	cin >> k;

	sort(vs.begin(), vs.end(), comp);

	cout << vs[k - 1] << endl;
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