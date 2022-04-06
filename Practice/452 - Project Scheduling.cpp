#include<iostream>
#include<ctime>
#include<vector>
#include<string>
#include<sstream>
#include<cstring>
#include<cstdio>
using namespace std;

#define endl "\n"
#define ll long long int

vector<int> adjList[26];

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

inline int toNode(char ch) {

	return ch - 'A';
}

void dfs(int &i, int *days, int *totDays, int &tempAns) {

	for (int j = 0; j < (int)adjList[i].size(); j++) {

		int v = adjList[i][j];

		if (days[v] + totDays[i] > totDays[v]) {

			totDays[v] = days[v] + totDays[i];

			tempAns = max(tempAns, totDays[v]);
		}

		dfs(v, days, totDays, tempAns);
	}
}

void solve() {

	int tc, days[26], totDays[26], node, day, ans, tempAns;
	string line; char ch; stringstream strStrm;

	cin >> tc; cin.ignore(); cin.ignore();

	while (tc--) {

		memset(days, -1, sizeof days); ans = tempAns = 0;

		for (int i = 0; i < 26; i++)
			adjList[i].clear();

		while (getline(cin, line) and line.size() != 0) {

			strStrm.clear();

			strStrm << line;

			strStrm >> ch;

			strStrm >> day;

			node = toNode(ch);

			days[node] = day;

			while (strStrm >> ch)
				adjList[node].push_back(toNode(ch));
		}

		// For every node, search the longest path using DFS.
		// Answer is the longest path among them.
		// It's a DP solution. -_-

		for (int i = 0; i < 26; i++) {

			if (days[i] != -1) {

				memset(totDays, 0, sizeof totDays);

				totDays[i] = days[i], tempAns = 0;

				dfs(i, days, totDays, tempAns);

				ans = max(ans, tempAns);
			}
		}
		cout << ans << endl;
		if (tc) cout << endl;
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