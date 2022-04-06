#include<stdio.h>

int main() {
    long long int k,n,w,i,cost=0,need;
    scanf("%lld %lld %lld",&k,&n,&w);
    for(i=1;i<=w;i++) cost=cost+i*k;
    need=cost-n;
    if(need>0) printf("%lld\n",need);
    else printf("0\n");

    return 0;
}
