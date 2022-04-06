#include<stdio.h>

int main() {

    int ara[15],i,j,s=0;

    for(i=0;i<15;i++) {
        scanf("%d",&ara[i]);
    }
    for(i=1;i<12;i++) {
        for(j=i;j<=i+7;j++) {
            if(ara[j]==ara[j-1]) s++;
            if(s==7) break;
        }
        if(j==7) break;
    }
    if(j==7) printf("You have win");
    else printf("You have loose");

}
