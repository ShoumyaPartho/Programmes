#include <stdio.h>

int main() {

    int n,t,a,b,sum;
    scanf("%d",&t);

    for(n=1;n<=t;n++) {
        scanf("%d %d",&a,&b);
        printf("Case %d: ",n);
        sum=a+b;
        printf("%d\n",sum);
    }
    return 0;
}
