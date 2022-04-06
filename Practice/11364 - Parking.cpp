#include <bits/stdc++.h>
using namespace std;

int main() {

    int t,n,d;

    scanf("%d",&t);

    while(t--) {
        scanf("%d",&n);

        vector<int> a;

        for(int i=0;i<n;i++) {
            scanf("%d",&d);
            a.push_back(d);
        }
        sort(a.begin(),a.end());
        printf("%d\n",(a[n-1]-a[0])*2);
    }
    return 0;
}
