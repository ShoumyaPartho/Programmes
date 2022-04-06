#include<stdio.h>

int main() {

    int t,i,n,j,total,a;
    char d[7],r[7];

    scanf("%d",&t);

    for(i=0;i<t;i++) {
        total=0;
        scanf("%d",&n);
        printf("Case %d:\n",i+1);
        while(n--) {
            scanf("%s",d);
            if(d[0]=='d') {
                scanf("%d",&a);
                total+=a;
            }
            else if(d[0]=='r') printf("%d\n",total);
        }
    }
    return 0;
}
