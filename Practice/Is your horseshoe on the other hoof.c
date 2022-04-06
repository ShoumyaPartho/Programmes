#include<stdio.h>

int main() {
    int ara[4],i,j,count=0;
    for(i=0;i<4;i++) scanf("%d",&ara[i]);
    for(i=0;i<4-1;i++) {
        for(j=i+1;j<4;j++) {
            if(ara[i]==ara[j] && ara[i]) {
                count++;
                ara[j]=0;
            }
        }
    }
    printf("%d\n",count);

    return 0;
}
