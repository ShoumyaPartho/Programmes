#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

vector<int> v;
bool check[100010];

void primelist() {
    v.push_back(2);
    int sqrtn = sqrt(100010);
    for (int i = 3; i <= 100010; i += 2) {
        if (!check[i]) {
            v.push_back(i);
            if (i <= sqrtn) {
                for (int j = i * i; j <= 100010; j += i + i) check[j] = true;
            }
        }
    }
}

void fact(int n) {
    int odd, even, cnt;
    odd = even = cnt = 0;
    int sqrtn = sqrt(n);
    for (int i = 0; i < v.size() && v[i] <= sqrtn; i++) {
        if (n < v[i]) break;
        if (n % v[i] == 0) {
            cnt = 0;
            while (n % v[i] == 0) {
                cnt++;
                n /= v[i];
            }
            if (cnt % 2 == 1) odd++;
            else if (cnt % 2 == 0) even++;
        }
    }
    if (n > 1) odd++;
    if (even > odd) cout << "Psycho Number" << endl;
    else cout << "Ordinary Number" << endl;
}

int main() {
    primelist();

    int tc, n;
    cin >> tc;

    while (tc--) {
        cin >> n;
        if (n == 0 || n == 1) cout << "Ordinary Number" << endl;
        else fact(n);
    }
    return 0;
}
