#include<stdio.h>

int main() {

    int n,a,b,i,total=0,max=0;
    scanf("%d",&n);
    while(n--) {
        scanf("%d %d",&a,&b);
        total-=a;
        total+=b;
        if(total>max) max=total;
    }
    printf("%d\n",max);

    return 0;
}
