#include <stdio.h>

int main() {

    int a,b,T,sum;
    scanf("%d",&T);
    while (T--) {
        a=0;
        scanf("%d",&sum);
        b=sum-a;
        if(b>10) {
            a=b-10;
            b=sum-a;
        }
        printf("%d %d\n",a,b);
    }
    return 0;
}
