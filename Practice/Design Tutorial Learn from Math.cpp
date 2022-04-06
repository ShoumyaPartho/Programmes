#include<iostream>
#include<cmath>
using namespace std;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

bool is_prime(int x) {
    int i = ceil((double)sqrt(x));
    for (int j = 2; j <= i; j++) {
        if (x % j == 0) return false;
    }
    return true;
}

int main() {
    fastIO();

    int n, a, b, m;
    bool x, y;
    cin >> n;
    m = ceil((double)n / 2);
    for (int i = 4; i <= m; i++) {
        a = i, b = n - i;
        x = is_prime(a);
        y = is_prime(b);
        if (!x && !y) {
            cout << a << " " << b;
            break;
        }
    }
    return 0;
}
