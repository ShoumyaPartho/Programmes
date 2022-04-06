#include<iostream>
#include<algorithm>
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

	int tc, ara[3];
	cin >> tc;
	while (tc--) {
		cin >> ara[0] >> ara[1] >> ara[2];
		//cout << ara[0] << " " << ara[1] << " " << ara[2] << endl;
		sort(ara, ara + 3);

		if (ara[2] == (ara[0] + ara[1])) cout << "YES\n";
		else cout << "NO\n";
	}


	return 0;
}