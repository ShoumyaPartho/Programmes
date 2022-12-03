#include<bits/stdc++.h>
using namespace std;

bool is_prime(int x) {
    if (x < 2)
        return false;

    else if (x == 2)
        return true;

    else if (x % 2 == 0)
        return false;

    for (int i = 3; i * i <= x; i++) {
        if (x % i == 0)
            return false;
    }

    return true;
}

void count_prime(int n, int *ara, int i, int &cntPrm) {
    if (i == n)
        return;

    if (is_prime(ara[i])) {
        cntPrm++;
        cout << ara[i] << " ";
    }

    count_prime(n, ara, i + 1, cntPrm);
}

int main() {
    int n, cntPrm = 0;
    cout << "Please enter size of array: ";
    cin >> n;

    int ara[n];
    cout << "Please enter elements of array: ";

    for (auto &x : ara)
        cin >> x;

    count_prime(n, ara, 0, cntPrm);

    cout << "\n\n#primes=" << cntPrm << endl;

    return 0;
}