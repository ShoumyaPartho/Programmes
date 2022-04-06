#include <stdio.h>

int main() {

    int tc,n1,n2,p,q,c,a;
    scanf("%d",&tc);

    while (tc--) {
        p=0,q=0;
        scanf("%d",&c);
        int ara[c];
        for(int i=0;i<c;i++) {
            scanf("%d %d",&n1,&n2);
            ara[i]=n1-n2;
        }
        for(int i=1;i<c;i++) {
            if(ara[i-1]==ara[i])    p++;
            else {
                q++;
                p=0;
                break;
            }
        }
        if(p)   printf("yes\n");
        else if(q)  printf("no\n");

        if (tc) printf("\n");
    }
    return 0;
}
