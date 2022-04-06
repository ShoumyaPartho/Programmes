#include <stdio.h>

int main() {

    int t,a,b,c,i;
    scanf("%d",&t);

    for (i=1;i<=t;i++) {
        scanf("%d%d%d",&a,&b,&c);
        if(a>b && a<c) printf("Case %d: %d\n",i,a);
        if(a<b && a>c) printf("Case %d: %d\n",i,a);
        if(b<a && b>c) printf("Case %d: %d\n",i,b);
        if(b>a && b<c) printf("Case %d: %d\n",i,b);
        if(c<b && c>a) printf("Case %d: %d\n",i,c);
        if(c>b && c<a) printf("Case %d: %d\n",i,c);
    }
    return 0;
}
