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

int main() {
	fastIO();

	double ax, ay, bx, by, cx, cy, dx, dy, ansX, ansY;

	while (scanf("%lf %lf %lf %lf %lf %lf %lf %lf",
	             &ax, &ay, &bx, &by, &cx, &cy, &dx, &dy) == 8) {
		if (ax == cx and ay == cy)
			ansX = bx + (dx - cx), ansY = by + (dy - cy);

		else if (ax == dx and ay == dy)
			ansX = bx + (cx - dx), ansY = by + (cy - dy);

		else if (bx == cx and by == cy)
			ansX = ax + (dx - bx), ansY = ay + (dy - by);

		else if (bx == dx and by == dy)
			ansX = ax + (cx - dx), ansY = ay + (cy - dy);

		printf("%0.3lf %0.3lf\n", ansX, ansY);
	}

	return 0;
}