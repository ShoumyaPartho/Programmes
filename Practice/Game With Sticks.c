#include<stdio.h>

int main() {
    int n,m;
    scanf("%d %d",&n,&m);
    if(n>m) {
        n=n+m;
        m=n-m;
        n=n-m;
    }
    if(n%2==0) printf("Malvika\n");
    else if(n%2==1) printf("Akshat\n");

    return 0;
}
