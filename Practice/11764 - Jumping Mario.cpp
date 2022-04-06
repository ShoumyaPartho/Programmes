#include<iostream>
#include<cstdio>
using namespace std;

int main() {
    int t,n;
    cin>>t;
    for(int i=1;i<=t;i++) {
        cin>>n;
        int ara[n],hj=0,lj=0;
        for(int j=0;j<n;j++) cin>>ara[j];
        for(int j=1;j<n;j++) {
            if(ara[j]>ara[j-1]) hj++;
            else if(ara[j]<ara[j-1]) lj++;
        }
        printf("Case %d: %d %d\n",i,hj,lj);
    }
    return 0;
}
