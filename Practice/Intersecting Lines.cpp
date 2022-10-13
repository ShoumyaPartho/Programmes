// Solved by: Shoumya

#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long int
const double EPS = 1e-9;

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

class Point {
public:
	double x, y;

	Point() {}

	Point(double _x, double _y) {
		x = _x;
		y = _y;
	}
};

class Line {
public:
	double	a, b, c;

	Line() {}

	Line(Point p1, Point p2) {
		if (fabs(p1.x - p2.x) < EPS)
			a = 1.0, b = 0, c = -p1.x;

		else {
			a = -(p1.y - p2.y) / (p1.x - p2.x);
			b = 1;
			c = -(a * p1.x) - p1.y;
		}
	}
};

bool isParallel(Line l1, Line l2) {
	return ((fabs(l1.a - l2.a) < EPS) and (fabs(l1.b - l2.b) < EPS));
}

bool isSame(Line l1, Line l2) {
	return (isParallel(l1, l2) and (fabs(l1.c - l2.c) < EPS));
}

Point getIntesectPoint(Line l1, Line l2) {
	Point p;

	p.x = (l1.b * l2.c - l2.b * l1.c) / (l1.a * l2.b - l2.a * l1.b);

	if (fabs(l1.b) < EPS)
		p.y = -(p.x * l2.a + l2.c);

	else
		p.y = -(p.x * l1.a + l1.c);

	return p;
}

void solve() {
	double x1, y1, x2, y2, x3, y3, x4, y4;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

	Line l1(Point(x1, y1), Point(x2, y2)), l2(Point(x3, y3), Point(x4, y4));

	if (isSame(l1, l2))
		cout << "LINE" << endl;

	else if (isParallel(l1, l2))
		cout << "NONE" << endl;

	else {
		Point p = getIntesectPoint(l1, l2);
		cout << "POINT " << setprecision(2) << fixed << p.x << " " << p.y << endl;
	}
}

int main() {
	fastIO();

	// solve();

	int tc, t; cin >> t;
	cout << "INTERSECTING LINES OUTPUT" << endl;

	for (tc = 1; tc <= t; tc++) {
		// cout << "Case " << tc << ": ";
		solve();
	}

	cout << "END OF OUTPUT" << endl;

	return 0;
}