#include<stdio.h>

main() {
    long long int n,m,a;
    scanf("%lld %lld %lld",&n,&m,&a);
    printf("%lld \n",((n+a-1)/a)*((m+a-1)/a));

    return 0;
}
