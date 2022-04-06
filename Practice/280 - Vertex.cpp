// Solved by: Shoumya

#include<iostream>
#include<ctime>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;

#define endl 		"\n"
#define ll 			long long int
#define VISITED 	true
#define UNVISITED 	false

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

void dfs(int root, vector<vector<int> > &adjLst, vector<bool> &visit) {
	int end;

	for (int i = 0; i < adjLst[root].size(); i++) {
		end = adjLst[root][i];

		if (visit[end] == UNVISITED) {
			visit[end] = VISITED;
			dfs(end, adjLst, visit);
		}
	}
}

void solve() {
	int n, start, end, root, num, len;

	while (cin >> n, n) {
		vector<vector<int> > adjLst(101);
		vector<bool> visit;
		vector<int> unvisitedAra, nodes(n + 1);

		while (cin >> start, start) {

			while (cin >> end, end)
				adjLst[start].push_back(end);
		}

		cin >> num;

		while (num--) {
			cin >> root;

			visit.clear();
			visit.assign(101, UNVISITED);
			dfs(root, adjLst, visit);

			unvisitedAra.clear();

			for (int i = 1; i <= n; i++) {
				if (visit[i] == UNVISITED)
					unvisitedAra.push_back(i);
			}

			len = unvisitedAra.size();

			cout << len;
			cout << (len == 0 ? "\n" : " ");

			for (int i = 0; i < len; i++)
				cout << unvisitedAra[i] << " \n"[i == len - 1];
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