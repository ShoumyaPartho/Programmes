#include<stdio.h>

int main() {

    int t,n,i,j,b;

    scanf("%d",&t);
    for(i=1;i<=t;i++) {
        scanf("%d",&n);
        int ara[n];
        b=0;
        for(j=0;j<n;j++) {
            scanf("%d",&ara[j]);
            if(b<ara[j]) b=ara[j];
        }
        printf("Case %d: %d\n",i,b);
    }
    return 0;
}
