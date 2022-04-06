#include<stdio.h>
#include<math.h>

int main() {
    long long int n,s,i;
    scanf("%lld",&n);
    s=ceil((double)n/2);

    if(n%2==0) printf("%lld\n",s);
    else if(n%2==1) printf("-%lld\n",s);

    return 0;
}
