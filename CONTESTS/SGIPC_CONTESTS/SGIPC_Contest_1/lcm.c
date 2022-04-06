#include<stdio.h>

int main() {

    long long int t,i,j,n,lcm,s;

    scanf("%lld",&t);

    for(i=1;i<=t;i++) {
        scanf("%lld",&n);
        lcm=n;
        for(j=n;j>1;j--) {
            if(lcm%j!=0) {
                lcm++;
                j=n+1;
            }
        }
        printf("Case %lld: %lld\n",i,lcm);
    }
    return 0;
}
