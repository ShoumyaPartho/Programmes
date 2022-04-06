#include<stdio.h>

int main() {
    int n,m,i,count=0;
    scanf("%d %d",&n,&m);
    int ara[n];
    for(i=0;i<n;i++) {
        scanf("%d",&ara[i]);
        if(ara[i]>m) count+=2;
        else count++;
    }
    printf("%d\n",count);

    return 0;
}
