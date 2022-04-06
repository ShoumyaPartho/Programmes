#include<stdio.h>

int main() {
    int ara[4],d,i,j,count=0;
    for(i=0;i<4;i++) scanf("%d",&ara[i]);
    scanf("%d",&d);
    int ara2[d];
    for(i=0;i<d;i++) ara2[i]=0;
    for(i=0;i<4;i++) {
        for(j=1;ara[i]*j<=d;j++) ara2[ara[i]*j-1]=1;
    }
    for(i=0;i<d;i++) {
        if(ara2[i]) count++;
    }
    printf("%d\n",count);

    return 0;
}
