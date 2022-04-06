#include<stdio.h>

int main() {

    int t,n,m,i,s;

    scanf("%d",&t);

    for(i=1;i<=t;i++) {
        scanf("%d %d",&n,&m);
        s=n*m;

        if(s%2==0) printf("Case %d: %d\n",i,(s/2));
        else if(s%2==1) printf("Case %d: %d\n",i,(s/2)+1);
    }
    return 0;
}
