//                  Assignment Done By

//              Name : Partho Choudhury Shoumya
//              Roll : 1807021

//----------    Basic Overview      -----------------

// I tried to design a basic hash function which would always provide
// fixed length of hash value specified in 'hashLen' varibale for any length of input.

// However for a specific input, this program would always give same output.
// But the output will definitely vary for different input.

// Length of the output hash value can be selected by setting value in 'hashVal' variable.

//----------    Mechanism Explained -----------------

// 1. First I stored 70 values (0-9,a-z,A-Z,!,@,#,$,%,&,*,_) in 'vals1' string in a random manner.
// 2. The 'vals2' string contains exactly the same value of 'vals1' in reverse order.
// 3. Then we start iterating over 'output' string as well as 'input' string.
// 4. While iterating over 'input' string, for each character of input string I calculated their respective ASCII value.
// 5. Then we got the value for 'idx' variable by using "idx = asciiVal % 70" formula.
// 6. Then we put the value of vals1[idx] to current index of output string if the 'asciiVal' contains a value less than 70.
//    Otherwise we put value of vals2[idx] to current index of output string.
//    This is being done to avoid getting same output for 2 different inputs.
// 7. We repeat the steps (3-6) till we get 100 digit output.
// 8. If the iteration of input stirng comes to an end before we get required digits of output,
//    we keep continuing iteration serially and cyclically over 'vals' string from the last index we got for 'idx' variable till we get required digits of output.


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
    int hashLen = 10, asciiVal, idx;

    // Storing [0-9,a-z,A-Z,!,@,#,$,%,&,*,_] in 'vals' string
    string vals1 = "0KgM_N8cnChDWEo1%YG&V*2L3p9aRbrsSZt@def#q$uAiTjXk6lmBvFUwxyzIHJ7OP4!5Q";

    // Storing reverse values of vals1 to avoid collision when finding a hash character after an ASCII value is mod by 70
    string vals2 = vals1; reverse(vals2.begin(), vals2.end());
    string input, output(hashLen, '0');

    cin >> input;

    // Iterating to get 'hashLen' specified output digits
    for (int i = 0, j = 0; i < hashLen; i++) {
        asciiVal = static_cast<int> (input[j]); // Taking ASCII value
        idx = asciiVal % 70; // Calculating index value

        // Checking value to determine which value to store.
        if (asciiVal < 70)
            output[i] = vals1[idx];

        else
            output[i] = vals2[idx];

        j = j + 1;

        // Making sure we get exactly 'hashLen' specified output digits even if iteration of input string comes to end.
        if (j == input.size()) {
            for (++i; i < hashLen; i++) {
                idx = (idx + 1) % 70;
                output[i] = vals1[idx]; // We could also store value of vals2.
            }
        }
    }

    cout << "The hash value for " << input << " is: " << output << endl;
}

int main() {
    fastIO();

    // solve();

    int tc, t = 2; // cin>>t;

    for (tc = 1; tc <= t; tc++) {
        // cout<<"Case "<<tc<<": ";
        solve();
    }

    return 0;
}