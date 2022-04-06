// Solved by: Shoumya

#include<iostream>
#include<ctime>
#include<vector>
#include<string>
#include<cstring>
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

void handleStraight(vector<vector<char> > &board, vector<vector<bool> > &free, int x, int y) {

	for (int dis = 1; (y + dis) <= 8 and board[y + dis][x] == '.'; dis++)
		free[y + dis][x] = false;

	for (int dis = -1; (y + dis) >= 1 and board[y + dis][x] == '.'; dis--)
		free[y + dis][x] = false;

	for (int dis = 1; (x + dis) <= 8 and board[y][x + dis] == '.'; dis++)
		free[y][x + dis] = false;

	for (int dis = -1; (x + dis) >= 1 and board[y][x + dis] == '.'; dis--)
		free[y][x + dis] = false;
}

void handleDiagonal(vector<vector<char> > &board, vector<vector<bool> > &free, int x, int y) {

	for (int dis = 1; (y + dis) <= 8 and (x + dis) <= 8 and board[y + dis][x + dis] == '.'; dis++)
		free[y + dis][x + dis] = false;

	for (int dis = 1; (y + dis) <= 8 and (x - dis) >= 1 and board[y + dis][x - dis] == '.'; dis++)
		free[y + dis][x - dis] = false;

	for (int dis = 1; (y - dis) >= 1 and (x - dis) >= 1 and board[y - dis][x - dis] == '.'; dis++)
		free[y - dis][x - dis] = false;

	for (int dis = 1; (y - dis) >= 1 and (x + dis) <= 8 and board[y - dis][x + dis] == '.'; dis++)
		free[y - dis][x + dis] = false;
}

void handleKing(vector<vector<char> > &board, vector<vector<bool> > &free, int x, int y) {

	if ((x + 1) <= 8) {
		free[y][x + 1] = false;

		if ((y + 1) <= 8)
			free[y + 1][x + 1] = false;

		if ((y - 1) >= 1)
			free[y - 1][x + 1] = false;
	}

	if ((x - 1) >= 1) {
		free[y][x - 1] = false;

		if ((y + 1) <= 8)
			free[y + 1][x - 1] = false;

		if ((y - 1) >= 1)
			free[y - 1][x - 1] = false;
	}

	if ((y + 1) <= 8)
		free[y + 1][x] = false;

	if ((y - 1) >= 1)
		free[y - 1][x] = false;
}

void handleQueen(vector<vector<char> > &board, vector<vector<bool> > &free, int x, int y) {

	handleStraight(board, free, x, y);
	handleDiagonal(board, free, x, y);
}

void handleBishop(vector<vector<char> > &board, vector<vector<bool> > &free, int x, int y) {

	handleDiagonal(board, free, x, y);
}

void handleKnight(vector<vector<char> > &board, vector<vector<bool> > &free, int x, int y) {

	if ((x + 2) <= 8) {

		if ((y + 1) <= 8)
			free[y + 1][x + 2] = false;

		if ((y - 1) >= 1)
			free[y - 1][x + 2] = false;
	}

	if ((x - 2) >= 1) {

		if ((y + 1) <= 8)
			free[y + 1][x - 2] = false;

		if ((y - 1) >= 1)
			free[y - 1][x - 2] = false;
	}

	if ((y + 2) <= 8) {

		if ((x + 1) <= 8)
			free[y + 2][x + 1] = false;

		if ((x - 1) >= 1)
			free[y + 2][x - 1] = false;
	}

	if ((y - 2) >= 1) {

		if ((x + 1) <= 8)
			free[y - 2][x + 1] = false;

		if ((x - 1) >= 1)
			free[y - 2][x - 1] = false;
	}
}

void handleRook(vector<vector<char> > &board, vector<vector<bool> > &free, int x, int y) {

	handleStraight(board, free, x, y);
}

void handlePawn(vector<vector<char> > &board, vector<vector<bool> > &free, int x, int y, int dir) {

	if (dir == 1 and (y + dir <= 8)) {

		if (x + 1 <= 8)
			free[y + dir][x + 1] = false;

		if (x - 1 >= 1)
			free[y + dir][x - 1] = false;
	}

	else if (dir == -1 and (y + dir >= 1)) {

		if (x + 1 <= 8)
			free[y + dir][x + 1] = false;

		if (x - 1 >= 1)
			free[y + dir][x - 1] = false;
	}
}

void solve() {

	string line;

	while (cin >> line) {

		vector<vector<char> > board(9, vector<char> (9, '.'));
		vector<vector<bool> > free(9, vector<bool> (9, true));
		int x = 1, y = 1, cnt = 0;

		for (auto it : line) {

			if (it == '/')
				y++, x = 1;

			else if (it >= '1' and it <= '8')
				x += (it - '0');

			else if (it == 'P')
				board[y][x] = it, free[y][x] = false, x++;

			else
				board[y][x] = tolower(it), free[y][x] = false, x++;
		}

		for (y = 1; y <= 8; y++) {
			for (x = 1; x <= 8; x++) {

				if (board[y][x] == 'k')
					handleKing(board, free, x, y);

				if (board[y][x] == 'q')
					handleQueen(board, free, x, y);

				if (board[y][x] == 'b')
					handleBishop(board, free, x, y);

				if (board[y][x] == 'n')
					handleKnight(board, free, x, y);

				if (board[y][x] == 'r')
					handleRook(board, free, x, y);

				if (board[y][x] == 'p')
					handlePawn(board, free, x, y, 1);

				if (board[y][x] == 'P')
					handlePawn(board, free, x, y, -1);
			}
		}

		for (int i = 1; i <= 8; i++) {
			for (int j = 1; j <= 8; j++) {
				if (free[i][j])
					cnt++;
			}
		}

		cout << cnt << endl;
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