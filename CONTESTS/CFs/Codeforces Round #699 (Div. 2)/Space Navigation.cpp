#include<iostream>
#include<string>
using namespace std;

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int main() {
	fastIO();

	int tc, l, r, u, d, reqX, reqY, px, py;
	string order;
	cin >> tc;
	while (tc--) {
		cin >> px >> py >> order;
		l = r = u = d = reqX = reqY = 0;
		for (auto i = 0; i < order.length(); i++) {
			if (order[i] == 'U') u++;
			else if (order[i] == 'D') d++;
			else if (order[i] == 'R') r++;
			else if (order[i] == 'L') l++;
		}
		if ((px < 0) and (l >= (-px))) reqX = 1;
		else if ((px >= 0) and (r >= px)) reqX = 1;
		if ((py < 0) and (d >= (-py))) reqY = 1;
		else if ((py >= 0) and (u >= py)) reqY = 1;

		cout << ((reqX and reqY ) ? "YES\n" : "NO\n");
		order.clear();
	}

	return 0;
}