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

bool checkRight(int i, int j, int h, int w, vector<vector<char> > &grid) {
	vector<pair<int, int> > points; points.push_back({i, j});
	string s = "snuke";

	for (int x = 1; x <= 4; x++) {
		int t = j + x;

		if (t > 0 and t <= w and grid[i][t] == s[x])
			points.push_back({i, t});

		else
			return false;
	}

	for (auto it : points)
		cout << it.first << " " << it.second << endl;

	return true;
}

bool checkLeft(int i, int j, int h, int w, vector<vector<char> > &grid) {
	vector<pair<int, int> > points; points.push_back({i, j});
	string s = "snuke";

	for (int x = 1; x <= 4; x++) {
		int t = j - x;

		if (t > 0 and t <= w and grid[i][t] == s[x])
			points.push_back({i, t});

		else
			return false;
	}

	for (auto it : points)
		cout << it.first << " " << it.second << endl;

	return true;
}

bool checkUp(int i, int j, int h, int w, vector<vector<char> > &grid) {
	vector<pair<int, int> > points; points.push_back({i, j});
	string s = "snuke";

	for (int x = 1; x <= 4; x++) {
		int t = i - x;

		if (t > 0 and t <= h and grid[t][j] == s[x])
			points.push_back({t, j});

		else
			return false;
	}

	for (auto it : points)
		cout << it.first << " " << it.second << endl;

	return true;
}

bool checkDown(int i, int j, int h, int w, vector<vector<char> > &grid) {
	vector<pair<int, int> > points; points.push_back({i, j});
	string s = "snuke";

	for (int x = 1; x <= 4; x++) {
		int t = i + x;

		if (t > 0 and t <= h and grid[t][j] == s[x])
			points.push_back({t, j});

		else
			return false;
	}

	for (auto it : points)
		cout << it.first << " " << it.second << endl;

	return true;
}

bool checkLUD(int i, int j, int h, int w, vector<vector<char> > &grid) {
	vector<pair<int, int> > points; points.push_back({i, j});
	string s = "snuke";

	for (int x = 1; x <= 4; x++) {
		int t1 = i - x, t2 = j - x;

		if (t1 > 0 and t1 <= h and t2 > 0 and t2 <= w and grid[t1][t2] == s[x])
			points.push_back({t1, t2});

		else
			return false;
	}

	for (auto it : points)
		cout << it.first << " " << it.second << endl;

	return true;
}

bool checkLDD(int i, int j, int h, int w, vector<vector<char> > &grid) {
	vector<pair<int, int> > points; points.push_back({i, j});
	string s = "snuke";

	for (int x = 1; x <= 4; x++) {
		int t1 = i + x, t2 = j - x;

		if (t1 > 0 and t1 <= h and t2 > 0 and t2 <= w and grid[t1][t2] == s[x])
			points.push_back({t1, t2});

		else
			return false;
	}

	for (auto it : points)
		cout << it.first << " " << it.second << endl;

	return true;
}

bool checkRUD(int i, int j, int h, int w, vector<vector<char> > &grid) {
	vector<pair<int, int> > points; points.push_back({i, j});
	string s = "snuke";

	for (int x = 1; x <= 4; x++) {
		int t1 = i - x, t2 = j + x;

		if (t1 > 0 and t1 <= h and t2 > 0 and t2 <= w and grid[t1][t2] == s[x])
			points.push_back({t1, t2});

		else
			return false;
	}

	for (auto it : points)
		cout << it.first << " " << it.second << endl;

	return true;
}

bool checkRDD(int i, int j, int h, int w, vector<vector<char> > &grid) {
	vector<pair<int, int> > points; points.push_back({i, j});
	string s = "snuke";

	for (int x = 1; x <= 4; x++) {
		int t1 = i + x, t2 = j + x;

		if (t1 > 0 and t1 <= h and t2 > 0 and t2 <= w and grid[t1][t2] == s[x])
			points.push_back({t1, t2});

		else
			return false;
	}

	for (auto it : points)
		cout << it.first << " " << it.second << endl;

	return true;
}

void solve() {
	int h, w; cin >> h >> w;
	vector<vector<char> > grid(h + 1, vector<char> (w + 1));

	for (int i = 1; i <= h; i++) {
		for (int j = 1; j <= w; j++)
			cin >> grid[i][j];
	}

	for (int i = 1; i <= h; i++) {
		for (int j = 1; j <= w; j++) {
			if (grid[i][j] == 's') {
				if (checkRight(i, j, h, w, grid) or
				        checkLeft(i, j, h, w, grid) or
				        checkUp(i, j, h, w, grid) or
				        checkDown(i, j, h, w, grid) or
				        checkLUD(i, j, h, w, grid) or
				        checkLDD(i, j, h, w, grid) or
				        checkRUD(i, j, h, w, grid) or
				        checkRDD(i, j, h, w, grid))
					break;
			}
		}
	}
}

int main() {
	fastIO();

	solve();

	return 0;
}