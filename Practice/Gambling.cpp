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

class node {
public:
	int maxPrefixSum, maxSuffixSum, maxSubArraySum, totalSum;

	node() {}

	node(int _a, int _b, int _c, int _d) {
		maxPrefixSum = _a;
		maxSuffixSum = _b;
		maxSubArraySum = _c;
		totalSum = _d;
	}
};

vector<node> segTree;

node merge(node leftChild, node rightChild) {
	node parentNode;

	parentNode.maxPrefixSum   = max(leftChild.maxPrefixSum, leftChild.totalSum + rightChild.maxPrefixSum);
	parentNode.maxSuffixSum   = max(rightChild.maxSuffixSum, rightChild.totalSum + leftChild.maxSuffixSum);
	parentNode.totalSum       = leftChild.totalSum + rightChild.totalSum;
	parentNode.maxSubArraySum = max(leftChild.maxSubArraySum, max(rightChild.maxSubArraySum, leftChild.maxSuffixSum + rightChild.maxPrefixSum));

	return parentNode;
}

void build(int tNode, int l, int r) {
	if (l == r) {
		segTree[tNode].maxPrefixSum = segTree[tNode].maxSuffixSum = segTree[tNode].maxSubArraySum = segTree[tNode].totalSum = -1;
		return;
	}

	int mid = (l + r) >> 1;

	build(tNode * 2, l, mid);
	build(tNode * 2 + 1, mid + 1, r);

	segTree[tNode] = merge(segTree[tNode * 2], segTree[tNode * 2 + 1]);
}

void update(int tNode, int tl, int tr, int pos, int val) {
	if (tr<pos or tl>pos)
		return;

	if (tl == tr and tr == pos) {
		segTree[tNode].maxPrefixSum = segTree[tNode].maxSuffixSum = segTree[tNode].maxSubArraySum = segTree[tNode].totalSum = val;
		return;
	}

	int mid = (tl + tr) >> 1;

	update(tNode * 2, tl, mid, pos, val);
	update(tNode * 2 + 1, mid + 1, tr, pos, val);

	segTree[tNode] = merge(segTree[tNode * 2], segTree[tNode * 2 + 1]);
}

node query(int tNode, int tl, int tr, int l, int r) {
	if (l > tr or r < tl)
		return node(0, 0, 0, 0);

	if (l <= tl and tr <= r)
		return segTree[tNode];

	int mid = (tl + tr) >> 1;

	return merge(query(tNode * 2, tl, mid, l, r), query(tNode * 2 + 1, mid + 1, r, l, r));
}

void solveBySegTree() {
	int n, tempMax, mx = 0, ans, ansL, ansR, tL, tAns; cin >> n;
	vector<int> nums(n + 1, 0);

	for (int i = 1; i <= n; i++)
		cin >> nums[i];

	map<int, vector<int> > mp;

	for (int i = 1; i <= n; i++)
		mp[nums[i]].push_back(i);

	segTree.resize(4 * n);
	build(1, 1, n);

	for (auto x : mp) {
		vector<int> v(x.second);

		for (auto i : v)
			update(1, 1, n, i, 1);

		tempMax = query(1, 1, n, 1, n).maxSubArraySum;

		if (tempMax > mx) {
			mx = tempMax;
			ans = x.first;
		}

		for (auto i : v)
			update(1, 1, n, i, -1);
	}

	vector<int> ara(n + 1, 0);

	for (int i = 1; i <= n; i++) {
		if (nums[i] == ans)
			ara[i] = 1;

		else
			ara[i] = -1;
	}

	mx = INT_MIN, ansL = 1, ansR = 1, tL = 1, tAns = 0;

	for (int i = 1; i <= n; i++) {
		tAns += ara[i];

		if (tAns > mx) {
			mx = tAns;
			ansR = i;
			ansL = tL;
		}

		if (tAns < 0) {
			tAns = 0;
			tL = i + 1;
		}
	}

	cout << ans << " " << ansL << " " << ansR << endl;
}

void solveByTwoPointer() {
	int n, mx, curMax, cur, ans, tL, ansL, ansR, tSum; cin >> n;
	vector<int> ara(n + 1, 0), b(n + 1, 0);
	map<int, vector<int> > mpVec;

	for (int i = 1; i <= n; i++) {
		cin >> ara[i];
		mpVec[ara[i]].push_back(i);
	}

	mx = INT_MIN;

	for (auto i : mpVec) {
		vector<int> v(i.second);
		cur = 1, curMax = 1;

		for (int j = 1; j < v.size(); j++) {
			cur = max(1, cur + 1 - (v[j] - v[j - 1] - 1));
			curMax = max(curMax, cur);
		}

		if (curMax > mx) {
			mx = curMax;
			ans = i.first;
		}
	}

	for (int i = 1; i <= n; i++) {
		if (ara[i] == ans)
			b[i] = 1;

		else
			b[i] = -1;
	}

	mx = INT_MIN, ansL = ansR = tL = 1, tSum = 0;

	for (int i = 1; i <= n; i++) {
		tSum += b[i];

		if (tSum > mx) {
			mx = tSum;
			ansR = i;
			ansL = tL;
		}

		if (tSum < 0) {
			tSum = 0;
			tL = i + 1;
		}
	}

	cout << ans << " " << ansL << " " << ansR << endl;
}

void solve() {
	// solveBySegTree();
	solveByTwoPointer();
}

int main() {
	fastIO();

	// solve();

	int tc, t; cin >> t;

	for (tc = 1; tc <= t; tc++) {
		// cout<<"Case "<<tc<<": ";
		solve();
	}

	return 0;
}