#include<stdio.h>

int main() {
    int t,n,m,rat,i;
    scanf("%d",&t);
    while(t--) {
        rat=1500;
        scanf("%d %d",&n,&m);
        int ara[n];
        for(i=0;i<n;i++) {
            scanf("%d",&ara[i]);
            rat+=ara[i];
        }
        if (rat==m) printf("Correct\n");
        else printf("Bug\n");
    }
    return 0;
}
