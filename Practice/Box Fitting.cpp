#include<iostream>
#include<ctime>
#include<map>
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

void solve() {
	ll tc, n, w, x, temp, highestBit, cnt, height, tempSum, tempCnt; cin >> tc;
	while (tc--) {
		cin >> n >> w; temp = cnt = height = tempSum = 0;
		map<ll, ll>mp;
		for (ll i = 0; i < n; i++) {
			cin >> x;
			mp[x]++;
			temp = max(temp, x);
		}
		for (ll i = 28; i >= 0; i--) {
			if (temp & (1 << i)) {
				highestBit = i;
				break;
			}
		}

		// Complexity = O(nlogn)

		while (cnt < n) {
			tempSum = 0;
			for (ll i = highestBit; i >= 0; i--) {
				if ((tempSum + (1 << i)) <= w) {
					if ((mp.find(1 << i) != mp.end()) and (mp[1 << i] > 0)) {
						tempCnt = (w - tempSum) / (1 << i);
						tempCnt = min(tempCnt, mp[1 << i]);
						cnt += tempCnt;
						tempSum += (tempCnt * (1 << i));
						mp[1 << i] -= tempCnt;


						// using this method, complexity became O(n^2 logn)

						// while ((mp[1 << i] > 0) and tempSum + mp[1 << i] <= w) {
						// 	mp[1 << i]--;
						// 	tempSum += (1 << i);
						// 	cnt++;
						// }
					}
				}
			}
			height++;
		}
		cout << height << endl;
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