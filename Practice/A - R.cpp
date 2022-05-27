#include <bits/stdc++.h>
using namespace std;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

void computeLPSArray(string pat, int M,
                     int lps[])
{

    int len = 0;
    int i = 1;
    lps[0] = 0; // lps[0] is always 0

    while (i < M)
    {
        if (pat[i] == pat[len])
        {
            len++;
            lps[i] = len;
            i++;
        }
        else
        {

            if (len != 0)
            {
                len = lps[len - 1];
            }
            else // if (len == 0)
            {
                lps[i] = len;
                i++;
            }
        }
    }
}

int KMPSearch(string pat, string txt)
{
    int M = pat.length();
    int N = txt.length();

    int lps[M];
    int j = 0; // index for pat[]

    computeLPSArray(pat, M, lps);

    int i = 0; // index for txt[]
    int res = 0;
    int next_i = 0;

    while (i < N)
    {
        if (pat[j] == txt[i])
        {
            j++;
            i++;
        }
        if (j == M)
        {

            j = lps[j - 1];
            res++;
        }
        else if (i < N && pat[j] != txt[i])
        {

            if (j != 0)
                j = lps[j - 1];
            else
                i = i + 1;
        }
    }
    return res;
}

// Driver code
int main()
{
    fastIO();
    string txt; cin >> txt;
    string pat = "hznu";
    int ans = KMPSearch(pat, txt);

    cout << ans;

    return 0;
}