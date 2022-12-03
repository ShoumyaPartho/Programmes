#include<bits/stdc++.h>
using namespace std;

void fileIO() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int main() {
	fileIO();

	int numOfPro = 5, numOfRes = 3, totRes[3] = {10, 5, 7}, available[3] = {0};
	int ans[numOfPro], idx = 0, finished[numOfPro] = {0};

	int maxNeed[numOfPro][numOfRes] = {
		{7, 5, 3}, // p0
		{83, 2, 2}, // p1
		{9, 0, 2}, // p2
		{2, 2, 2}, // p3
		{4, 3, 3}  // p4
	};

	int allocated[numOfPro][numOfRes] = {
		{0, 1, 0},
		{2, 0, 0},
		{3, 0, 2},
		{2, 1, 1},
		{0, 0, 2}
	};

	int curNeed[numOfPro][numOfRes];

	for (int i = 0; i < numOfPro; i++) {
		for (int j = 0; j < numOfRes; j++)
			curNeed[i][j] = maxNeed[i][j] - allocated[i][j];
	}

	for (int j = 0; j < numOfRes; j++) {
		int cnt = 0;

		for (int i = 0; i < numOfPro; i++)
			cnt += allocated[i][j];

		available[j] = totRes[j] - cnt; // Counting initially available resources.
	}

	for (int k = 1; k <= numOfPro; k++) {
		for (int i = 0; i < numOfPro; i++) {
			if (not finished[i]) {
				int flag = 1;

				for (int j = 0; j < numOfRes; j++) {
					if (curNeed[i][j] > available[j]) {
						flag = 0;
						break;
					}
				}

				if (flag) {
					cout << "finished process is P" << i << endl;
					finished[i] = 1;
					ans[idx++] = i;

					for (int j = 0; j < numOfRes; j++)
						available[j] += allocated[i][j];

					// cout << "After executing Process " << i << " we have available:\n";

					// for (int j = 0; j < numOfRes; j++)
					// 	cout << "Resource " << j << ": " << available[j] << " \n"[j == numOfRes - 1];

					// cout << endl << endl;
				}
			}
		}
	}

	int flag = 1;

	for (int i = 0; i < numOfPro; i++) {
		if (not finished[i]) {
			flag = 0;
			cout << "System is in a not-safe state" << endl;
			cout << "Bad process is P" << i << endl;
			break;
		}
	}

	if (flag) {
		cout << "System is in a safe state and the order of execution of Processes is as below:\n";

		for (int i = 0; i < idx; i++)
			cout << "P" << ans[i] << " \n"[i == idx - 1];

		cout << "\n\nAfter executing all processes we have available:\n";

		for (int j = 0; j < numOfRes; j++)
			cout << "Resource " << j << ": " << available[j] << " \n"[j == numOfRes - 1];

	}

	return 0;
}