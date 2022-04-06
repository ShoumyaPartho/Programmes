#include<stdio.h>
#include<math.h>

int main() {

    long long int a,b,c;
    scanf("%lld %lld %lld",&a,&b,&c);
    a=ceil((double)a/c);
    b=ceil((double)b/c);
    printf("%lld\n",a*b);

    return 0;
}
