// Solved by: Shoumya

#include<iostream>
#include<ctime>
#include<vector>
#include<string>
#include<set>
#include<algorithm>
#include<iomanip>
#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long int
#define ins insert

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

set <string> st;

void takeElements() {

	st.ins("h"); st.ins("he"); st.ins("li"); st.ins("be");
	st.ins("b"); st.ins("c"); st.ins("n"); st.ins("o");
	st.ins("f"); st.ins("ne"); st.ins("na"); st.ins("mg");
	st.ins("al"); st.ins("si"); st.ins("p"); st.ins("s");
	st.ins("cl"); st.ins("ar"); st.ins("k"); st.ins("ca");
	st.ins("sc"); st.ins("ti"); st.ins("v"); st.ins("cr");
	st.ins("mn"); st.ins("fe"); st.ins("co"); st.ins("ni");
	st.ins("cu"); st.ins("zn"); st.ins("ga"); st.ins("ge");
	st.ins("as"); st.ins("se"); st.ins("br"); st.ins("kr");
	st.ins("rb"); st.ins("sr"); st.ins("y"); st.ins("zr");
	st.ins("nb"); st.ins("mo"); st.ins("tc"); st.ins("ru");
	st.ins("rh"); st.ins("pd"); st.ins("ag"); st.ins("cd");
	st.ins("in"); st.ins("sn"); st.ins("sb"); st.ins("te");
	st.ins("i"); st.ins("xe"); st.ins("cs"); st.ins("ba");
	st.ins("hf"); st.ins("ta"); st.ins("w"); st.ins("re");
	st.ins("os"); st.ins("ir"); st.ins("pt"); st.ins("au");
	st.ins("hg"); st.ins("tl"); st.ins("pb"); st.ins("bi");
	st.ins("po"); st.ins("at"); st.ins("rn"); st.ins("fr");
	st.ins("ra"); st.ins("rf"); st.ins("db"); st.ins("sg");
	st.ins("bh"); st.ins("hs"); st.ins("mt"); st.ins("ds");
	st.ins("rg"); st.ins("cn"); st.ins("fl"); st.ins("lv");
	st.ins("la"); st.ins("ce"); st.ins("pr"); st.ins("nd");
	st.ins("pm"); st.ins("sm"); st.ins("eu"); st.ins("gd");
	st.ins("tb"); st.ins("dy"); st.ins("ho"); st.ins("er");
	st.ins("tm"); st.ins("yb"); st.ins("lu"); st.ins("ac");
	st.ins("th"); st.ins("pa"); st.ins("u"); st.ins("np");
	st.ins("pu"); st.ins("am"); st.ins("cm"); st.ins("bk");
	st.ins("cf"); st.ins("es"); st.ins("fm"); st.ins("md");
	st.ins("no"); st.ins("lr");
}

void solve() {

	takeElements();

	int tc, len, flag, maskOne, maskTwo; cin >> tc;

	while (tc--) {
		string s; cin >> s; flag = 1, maskOne = 0, maskTwo = 0;
		len = s.size();

		for (int i = 0; i < len; i++) {
			maskTwo = maskOne;
			maskOne = flag;
			flag = 0;

			string temp; temp.push_back(s[i]);

			if (maskOne and st.count(temp))
				flag = 1;

			temp.clear();

			if (i) {
				temp.push_back(s[i - 1]);
				temp.push_back(s[i]);

				if (maskTwo and st.count(temp))
					flag = 1;
			}
		}

		cout << (flag ? "YES" : "NO") << endl;
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