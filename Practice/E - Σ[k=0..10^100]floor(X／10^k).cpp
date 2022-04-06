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
	string s, ans; cin >> s;
	ll sum = 0, carry = 0;

	for (int i = 0; i < s.size(); i++)
		sum += (s[i] - '0');

	for (int i = s.size() - 1;; i--) {
		carry += sum;

		ans.push_back('0' + (carry % 10));
		carry /= 10;

		if (i >= 0)
			sum -= (s[i] - '0');

		if (i <= 0) {
			if (carry)
				ans.push_back('0' + carry);
			break;
		}
	}

	reverse(ans.begin(), ans.end());

	cout << ans << endl;
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

// string findAns(string &actual, string &s, int point) {
// 	string tempStr = "00000" + s;
// 	int carry = 0, i, j, k, temp;

// 	for (k = tempStr.size() - 1, j = point - 1, i = s.size() - 1; i >= 0; j--, i--, k--) {
// 		if (i >= 0 and j >= 0)
// 			temp = (s[i] - '0') + (actual[j] - '0');

// 		else if (i >= 0)
// 			temp = (s[i] - '0');

// 		tempStr[k] = '0' + (temp + carry) % 10;
// 		carry = (temp + carry) / 10;

// 		if (i == 0 and carry)
// 			tempStr[k - 1] = '1';
// 	}

// 	for (int i = 0;; i++) {
// 		if (tempStr[i] > '0') {
// 			k = i;
// 			break;
// 		}
// 	}

// 	string ans(tempStr.begin() + k, tempStr.end());

// 	return ans;
// }

// void solve() {
// 	string s, actual, ans; cin >> s; actual = ans = s;
// 	int point = s.size() - 1;

// 	for (int i = point; i; i--) {
// 		ans = findAns(actual, s, i);
// 		s = ans;
// 		// cout << '+' << " " << s << endl;
// 	}

// 	cout << ans << endl;
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