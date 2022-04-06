#include<stdio.h>

int main() {

    int t,i,j,a;

    scanf("%d",&t);
    for(a=0;a<t;a++){
        scanf("%d %d",&i,&j);
        printf("Case %d: %d\n",a+1,i+j);
    }

        return 0;
}
