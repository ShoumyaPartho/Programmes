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

void getFreq(int * ara, int num) {
	while (num) {
		int x = num % 10;
		ara[x]++;
		num /= 10;
	}
}

int getNewNum(int num) {
	int cntNum[12] = {0};
	int cntNewNum[12] = {0};

	getFreq(cntNum, num);

	int tmp = num, flag;

	while (tmp) {
		tmp--;
		flag = 1;
		for (int i = 0; i < 10; i++)
			cntNewNum[i] = 0;
		getFreq(cntNewNum, tmp);

		for (int i = 0; i < 10; i++) {
			if (cntNum[i] != cntNewNum[i]) {
				flag = 0;

				if (cntNum[0] != cntNewNum[0]) {
					for (int i = 1; i < 10; i++) {
						if (cntNum[i] == cntNewNum[i])
							flag = 1;
						else {
							flag = 0;
							break;
						}
					}
				}

				break;
			}
		}

		if (flag)
			break;
	}

	if (flag)
		return tmp;

	else
		return -1;
}

void solve() {
	int num; cin >> num;

	int newNum = getNewNum(num);

	cout << newNum << endl;
}

int main() {
	fastIO();

	solve();

	return 0;
}