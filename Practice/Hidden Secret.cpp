// Solved by: Shoumya

#include<iostream>
#include<ctime>
#include<vector>
#include<algorithm>
#include<iomanip>
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

void solve() {
	int  t;
	string s1, s2;
	cin >> t;
	getchar();
	for (int kk = 1; kk <= t; kk++)
	{
		//getchar();
		getline(cin, s1);
		//cin.getline(s1, 200);
		//getchar();
		//cout << "ok" << endl;
		getline(cin, s2);
		//getchar();
		// cin.getline(s2, 200);
		transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
		transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
		cout << s1 << endl;
		cout << s2 << endl;
		int cs1[26] = {0}, cs2[26] = {0};

		for (int i = 0; i < s1.size(); i++)
		{
			if (s1[i] >= 'a' && s1[i] <= 'z' )
				cs1[s1[i] - 'a']++;
		}
		for (int i = 0; i < s2.size(); i++)
		{
			if (s2[i] >= 'a' && s2[i] <= 'z' )
				cs2[s2[i] - 'a']++;
		}
		int flag = 0;
		for (int i = 0; i < 26; i++)
		{
			if (cs1[i] != cs2[i])
			{
				flag = 1;
				break;
			}
		}
		if (flag)
		{
			cout << "Case " << kk << ": No\n";
		}
		else
			cout << "Case " << kk << ": Yes\n";
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