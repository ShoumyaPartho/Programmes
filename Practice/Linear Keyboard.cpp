// Solved by: Shoumya

#include<iostream>
#include<ctime>
#include<vector>
#include<algorithm>
#include<iomanip>
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
	int tc, ans; cin >> tc;

	while (tc--) {
		string keyBoard, word; ans = 0;
		cin >> keyBoard >> word;

		vector<int> keyNum(30, 0);
		for (int i = 0; i < keyBoard.size(); i++)
			keyNum[keyBoard[i] - 'a' + 1] = i + 1;

		for (int i = 1; i < word.size(); i++)
			ans += abs(keyNum[word[i] - 'a' + 1] - keyNum[word[i - 1] - 'a' + 1]);

		cout << ans << endl;
	}
}

int main() {
	fastIO();
	clock_t start = clock();
	// Write code here...

	solve();

#ifndef ONLINE_JUDGE
	clock_t stop = clock(); cout.precision(3);
	cout << fixed << "\n\nTime taken: " << (double)(stop - start) / CLOCKS_PER_SEC * 1000 << " seconds" << endl;
#endif

	return 0;
}






// // Solved by: Shoumya

// #include<iostream>
// #include<ctime>
// #include<vector>
// #include<string>
// #include<algorithm>
// #include<iomanip>
// using namespace std;

// #define endl "\n"
// #define ll long long int

// void fastIO() {
// 	ios_base::sync_with_stdio(false);
// 	cin.tie(0), cout.tie(0);

// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif
// }

// void solve() {
// 	int tc, pos, ans; cin >> tc;

// 	while (tc--) {
// 		string keyBoard, word;
// 		cin >> keyBoard >> word;
// 		pos = -1, ans = 0;

// 		for (int i = 0; i < word.size(); i++) {
// 			for (int j = 0; j < keyBoard.size(); j++) {
// 				if (word[i] == keyBoard[j]) {
// 					if (pos == -1)
// 						pos = j;

// 					else {
// 						ans += abs(j - pos);
// 						pos = j;
// 					}
// 				}
// 			}
// 		}

// 		cout << ans << endl;
// 	}
// }

// int main() {
// 	fastIO();
// 	clock_t start = clock();
// 	// Write code here...

// 	solve();

// #ifndef ONLINE_JUDGE
// 	clock_t stop = clock(); cout.precision(3);
// 	cout << fixed << "\n\nTime taken: " << (double)(stop - start) / CLOCKS_PER_SEC * 1000 << " seconds" << endl;
// #endif

// 	return 0;
// }