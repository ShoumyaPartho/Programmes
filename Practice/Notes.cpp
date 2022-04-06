#include<iostream>
#include<cmath>
#include<ctime>
#include<vector>
#include<unordered_set>
using namespace std;

#define ll long long int
#define endl "\n"

vector<int> primes;
char status[100050];

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

// -------------------------------->  1  <-----------------------------------------------

void advancedDigitCounting() {
    //GeeksForGeeks DSA Free course reference
    auto n = 568;
    cout.precision(20);
    cout << "Number of digits in " << n << " is: " << floor(log10(n) + 1) << endl;
}

// -------------------------------->  2  <-----------------------------------------------

int euclideanGCD(int a, int b) {
    //Special Cases
    //if(a==0 && b==0) return "INFINITY";
    //If a or b is negative then gcd=(|a|,|b|);

    //Iterative Form
    /*while(b){
        a=a%b;
        swap(a,b);
    }
    return a;*/

    //Recursive Form
    if (b == 0) return a;
    return euclideanGCD(b, a % b);
}

// -------------------------------->  3  <-----------------------------------------------

void sieveOfEratosthenes() {
    //Taking input
    cout << "Please enter the number: ";
    int n;
    cin >> n;
    int sqrtN = sqrt(n + 1);
    primes.push_back(2);

    for (int i = 3; i <= sqrtN; i += 2) {
        if (status[i >> 1] == 0) {
            //cout<<"Executing "<<i<<endl<<endl;
            //primes.push_back(i);
            for (int j = i * i; j <= n; j += 2 * i) status[j >> 1] = 1;
        }
    }
    for (int i = 3; i <= n; i += 2) {
        if (status[i >> 1] == 0) primes.push_back(i);
    }
    for (auto it = primes.begin(); it != primes.end(); it++) cout << *it << " ";
}

// -------------------------------->  4  <-----------------------------------------------

void segmentedSieveOfEratosthenes() {

}

// -------------------------------->  5  <-----------------------------------------------

void towerOfHanoi(int n, const char s, const char a, const char d) {
    if (n == 1) {
        cout << "Move Disc 1 from " << s << " to " << d << endl;
        return;
    }
    towerOfHanoi(n - 1, s, d, a);
    cout << "Move Disc " << n << " from " << s << " to " << d << endl;
    towerOfHanoi(n - 1, a, s, d);

}

// -------------------------------->  6  <-----------------------------------------------

void printStrNoConsectvOne(int n, int i, string osf) {
    if (i >= n) {
        cout << osf << "\n";
        return;
    }
    printStrNoConsectvOne(n, i + 1, osf + "0,");
    (i + 2) <= n ? printStrNoConsectvOne(n, i + 2, osf + "1,0,") : printStrNoConsectvOne(n, i + 2, osf + "1,");
}

// -------------------------------->  7  <-----------------------------------------------

void printPattern(int i, int j, int n) {
    if (i > n) return;

    if (j == i) {
        cout << "\n";
        printPattern(i + 1, 0, n);
    }
    else {
        cout << "* ";
        printPattern(i, j + 1, n);
    }
}

// -------------------------------->  8  <-----------------------------------------------

void perm(string s, string osf) {
    if (s == "") {
        cout << osf << "\n";
        return;
    }
    unordered_set<char> st;
    for (int i = 0; i < s.size(); i++) {
        if (st.count(s[i]) == 0) {
            st.insert(s[i]);
            perm(s.substr(0, i) + s.substr(i + 1), osf + s[i]);
        }
    }
}

// -------------------------------->  9  <-----------------------------------------------

void permBackTrack(string &s, int j) {
    if (s.size() - 1 == j) {
        cout << s << "\n";
        return;
    }
    unordered_set<char> st;
    for (int i = j; i < s.size(); i++) {
        if (st.count(s[i]) == 0) {
            st.insert(s[i]);
            swap(s[i], s[j]);
            permBackTrack(s, j + 1);
            swap(s[i], s[j]);
        }
    }
}

// -------------------------------->  10  <----------------------------------------------

void lexOrder(int n, int i) {
    if (i > n) return;
    cout << i << endl;

    for (int j = (i == 0) ? 1 : 0; j < 10; j++)
        lexOrder(n, 10 * i + j);
}

// -------------------------------->  11  <----------------------------------------------

void subsetBackTrack(int *arr, vector<int> &v, int n, int i) {
    if (i == n) {
        for (auto it = v.begin(); it != v.end(); it++) cout << *it << " ";
        cout << "\n";
        return;
    }
    subsetBackTrack(arr, v, n, i + 1);
    v.push_back(arr[i]);
    subsetBackTrack(arr, v, n, i + 1);
    v.pop_back();
}

// -------------------------------->  12  <----------------------------------------------

void highlyCompositeNumber(ll *prime, ll pos, ll limit, ll n, ll div, ll &resNum, ll &resDiv, ll &num, ll &cnt) {
    if (div > resDiv) {
        resDiv = div;
        resNum = n;
    }
    else if (div == resDiv and n < resNum) resNum = n;

    if (pos == 9) return;

    ll p = prime[pos];

    for (auto i = 1; i <= limit; i++) {
        cnt++;
        if (n * p > num) break;
        highlyCompositeNumber(prime, pos + 1, i, n * p, div * (i + 1), resNum, resDiv, num, cnt);
        p = p * prime[pos];
    }
}


int main() {

    fastIO();
    clock_t start = clock();

    // 1. Advance method to count number of digits in an integer
    //advancedDigitCounting();

    //----------------------------------------------------------------------------

    // 2. Most efficient way to calculate GCD of 2 integers
    // cout<<euclideanGCD(947,27);

    //----------------------------------------------------------------------------

    // 3. Prime number generator
    // sieveOfEratosthenes();

    //----------------------------------------------------------------------------

    // 4. Method to generate prime numbers in a given range
    // segmentedSieveOfEratosthenes()

    //----------------------------------------------------------------------------

    // 5. Tower of Hanoi with recursion.
    // int n;
    // char s = 'A', a = 'B', d = 'C';
    // cin >> n;
    // towerOfHanoi(n, s, a, d);

    //----------------------------------------------------------------------------

    // 6. Print binary strings of length n with no consecutive 1's
    // (6-9) Reference: Sanket's Recursion micro-course
    // int n; cin >> n;
    // printStrNoConsectvOne(n, 0, "");

    //----------------------------------------------------------------------------

    // 7. Print the pattern
    // int n;
    // cin >> n;
    // printPattern(1, 0, n);

    //----------------------------------------------------------------------------

    // 8. Permutation of all elements of an array with repetition of elements - Recursive method
    // string s = "12345";
    // perm(s, "");

    //----------------------------------------------------------------------------

    // 9. Permutation of all elements of an array with repetition of elements - Backtracking method

    // string s; cin >> s;
    // permBackTrack(s, 0);

    //----------------------------------------------------------------------------

    // 10. Lexicographical order
    // int n; cin >> n;
    // lexOrder(n, 0);

    //----------------------------------------------------------------------------

    // 11. Printing subset using Backtracking

    // int ara[] = {1, 2, 3};
    // vector<int> v;
    // subsetBackTrack(ara, v, 3, 0);
    // Rat Maze problem for Backtrcking


    //----------------------------------------------------------------------------

    // 12. Determinig Max HCN inside [1-num]

    // long long int resNum = 0, resDiv = 0, num = 10000, prime[] = {2, 3, 5, 7, 11, 13, 17, 19, 23}, cnt = 0;
    // highlyCompositeNumber(prime, 0, 30, 1, 1, resNum, resDiv, num, cnt);
    // cout << resNum << " " << resDiv << endl << cnt << endl;

    //----------------------------------------------------------------------------

    clock_t stop = clock(); cout.precision(10);
    cout << "\nTime taken: " << (double)(stop - start) / CLOCKS_PER_SEC * 1000 << " seconds" << endl;

    return 0;
}
