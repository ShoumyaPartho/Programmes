#include<stdio.h>

int main() {
    int n,m,k,a,i;
    scanf("%d %d",&n,&m);
    int ara1[m],ara[n];
    for(i=0;i<n;i++) ara[i]=0;
    for(i=0;i<m;i++) {
        scanf("%d",&ara1[i]);
        ara[ara1[i]-1]=1;
    }
    scanf("%d",&k);
    int ara2[k];
    for(i=0;i<k;i++) {
        scanf("%d",&ara2[i]);
        ara[ara2[i]-1]=1;
    }
    for(i=0;i<n;i++) {
        if(ara[i]==0) {
            a=0;
            break;
        }
        else a=1;
    }
    if(a) printf("I become the guy.\n");
    else if(!a) printf("Oh, my keyboard!\n");

    return 0;
}
