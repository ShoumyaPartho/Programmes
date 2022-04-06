#include<stdio.h>

int main() {
    int n,i,j,count=1;
    scanf("%d",&n);
    char ara[n+1][3];
    for(i=0;i<n;i++) {
        scanf("%s",ara[i]);
    }
    for(i=1;i<n;i++) {
        if(ara[i-1][1]==ara[i][0]) count++;
        else continue;
    }
    printf("%d\n",count);

    return 0;
}
