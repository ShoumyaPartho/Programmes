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

	int tc; cin >> tc;
	while (tc--) {
		string s;
		cin >> s;
		for (int i = 0; i < s.length(); i += 2) {
			if (s[i] == 'a') s[i] = 'b';
			else s[i] = 'a';
		}
		for (int i = 1; i < s.length(); i += 2) {
			if (s[i] == 'z') s[i] = 'y';
			else s[i] = 'z';
		}
		cout << s << "\n";
	}

	return 0;
}