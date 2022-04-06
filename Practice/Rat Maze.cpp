#include<iostream>
#include<ctime>
#include<vector>
using namespace std;

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int path = 0;

void ratMaze(int i, int j, vector<vector<int> > &v, vector<vector<bool> > &visited, int n) {
	if (i == (n - 1) and j == (n - 1)) {
		path++;
		return;
	}
	if (i >= n or i<0 or j >= n or j < 0 or visited[i][j] == true) return;

	visited[i][j] = true;

	if (i + 1 < n and v[i + 1][j] == 0)
		ratMaze(i + 1, j, v, visited, n);
	if (i - 1 >= 0 and v[i - 1][j] == 0)
		ratMaze(i - 1, j, v, visited, n);
	if (j + 1 < n and v[i][j + 1] == 0)
		ratMaze(i, j + 1, v, visited, n);
	if (j - 1 >= 0 and v[i][j - 1] == 0)
		ratMaze(i, j - 1, v, visited, n);

	visited[i][j] = false;
	return;

}

void solve() {
	int n; cin >> n;
	vector<vector<int> > v(n, vector<int>(n, 0));
	vector<vector<bool> >visited(n, vector<bool> (n, false));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) cin >> v[i][j];
	}

	ratMaze(0, 0, v, visited, n);
	cout << path << endl;
}

int main() {
	fastIO();
	clock_t start = clock();

	solve();

	clock_t stop = clock(); cout.precision(10);
#ifndef ONLINE_JUDGE
	cout << "\n\nTime taken: " << (double)(stop - start) / CLOCKS_PER_SEC * 1000 << " seconds" << endl;
#endif

	return 0;
}