#include<stdio.h>

int main() {

    int n,i,count=0;
    scanf("%d",&n);
    char ara[n+5];
    scanf("%s",ara);

    for(i=1;i<n;i++) {
        if(ara[i]==ara[i-1]) {
            count++;
        }
    }
    printf("%d\n",count);

    return 0;
}
