#include<stdio.h>

int main() {
    int t,n,m,i,count;
    scanf("%d",&t);
    while (t--) {
        count=0;
        scanf("%d",&n);
        int ara[n];
        for(i=0;i<n;i++) {
            scanf("%d",&ara[i]);
            if(ara[i]) count++;
        }
        printf("%d\n",count);
    }
    return 0;
}
