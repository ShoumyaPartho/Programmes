#include<stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int ara[n][2],i,j,count=0;
    for(i=0;i<n;i++) {
        for(j=0;j<2;j++) scanf("%d",&ara[i][j]);
    }
    for(i=0;i<n-1;i++) {
        for(j=i+1;j<n;j++) {
            if(ara[i][0]==ara[j][1]) count++;
        }
    }
    for(i=0;i<n-1;i++) {
        for(j=i+1;j<n;j++) {
            if(ara[i][1]==ara[j][0]) count++;
        }
    }
    printf("%d\n",count);

    return 0;
}
