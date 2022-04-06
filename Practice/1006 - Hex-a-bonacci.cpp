#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    long long int tc,ara[10010],n,res;
    scanf("%lld",&tc);
    for(int i=1;i<=tc;i++) {
        scanf("%lld %lld %lld %lld %lld %lld %lld",&ara[0],&ara[1],&ara[2],&ara[3],&ara[4],&ara[5],&n);
        for(int j=6;j<=n;j++) ara[j]=(ara[j-1]+ara[j-2]+ara[j-3]+ara[j-4]+ara[j-5]+ara[j-6])%10000007;
        res=ara[n]%10000007;
        printf("Case %d: %lld\n",i,res);
    }
    return 0;
}
