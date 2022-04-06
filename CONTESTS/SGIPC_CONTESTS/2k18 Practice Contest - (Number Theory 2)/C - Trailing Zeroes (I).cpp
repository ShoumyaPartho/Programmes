#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

vector<int> prime;
bool check[1000010];

void soe() {
    prime.push_back(2);
    int sqrtn = sqrt(1000010) + 1;
    for (int i = 3; i < 1000010; i += 2) {
        if (check[i] == false) {
            prime.push_back(i);
            if (i < sqrtn) {
                for (int j = i * i; j <= 1000010; j += i + i) check[j] = true;
            }
        }
    }
}

int main() {
    soe();

    long long int tc, t, n, sqrtn, cnt, res;
    cin >> t;

    for (tc = 1; tc <= t; tc++) {
        cin >> n;
        sqrtn = sqrt(n);
        res = 1;

        for (int i = 0; i < prime.size() && prime[i] <= sqrtn; i++) {
            cnt = 0;
            if (n < prime[i]) break;
            if (n % prime[i] == 0) {
                while (n % prime[i] == 0) {
                    n /= prime[i];
                    cnt++;
                }
                res *= (cnt + 1);
            }
        }
        if (n != 1) res *= 2;
        cout << "Case " << tc << ": " << res - 1 << endl;
    }
    return 0;
}
