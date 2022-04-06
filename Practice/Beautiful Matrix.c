#include<stdio.h>

int main() {

    int ara[5][5],i,j,a,b;
    for(i=0;i<5;i++) {
        for(j=0;j<5;j++) {
            scanf("%d",&ara[i][j]);
            if(ara[i][j]==1) {
                a=i+1;
                b=j+1;
            }
        }
    }
    if(a>=3) a-=3;
    else a=3-a;
    if(b>=3) b-=3;
    else b=3-b;
    printf("%d\n",a+b);

    return 0;
}
