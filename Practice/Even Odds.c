#include<stdio.h>
#include<math.h>

int main() {
    long long int n,k,s,m;
    scanf("%lld %lld",&n,&k);
    m=ceil((double)n/2);
    if(k<=m) printf("%lld\n",(2*k)-1);
    else if(k>m) printf("%lld\n",(k-m)*2);

    return 0;
}
