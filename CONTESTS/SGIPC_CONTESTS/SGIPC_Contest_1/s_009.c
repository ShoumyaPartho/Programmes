#include<stdio.h>

int main() {

    int t,m,l,i,s,x,a;

    scanf("%d",&t);

    for(i=1;i<=t;i++) {
        scanf("%d %d",&m,&l);
        if(m<l) a=l-m;
        else if(m>=l) a=m-l;

        s=9+(4*a)+(m*4)+10;
        printf("Case %d: %d\n",i,s);
    }

    return 0;
}
