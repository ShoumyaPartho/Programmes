#include<stdio.h>
#include<math.h>

int main() {
    int n,m,s,count=0;
    scanf("%d %d",&n,&m);
    while(1) {
        if(n>m) break;
        else {
            n=n*3;
            m=m*2;
            count++;
        }
    }
    printf("%d\n",count);

    return 0;
}
