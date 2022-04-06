#include<stdio.h>

int main() {
    int n,a=0,d=0,i;
    scanf("%d",&n);
    char ara[n+1];
    scanf("%s",ara);
    for(i=0;i<n;i++) {
        if(ara[i]=='A') a++;
        else if(ara[i]=='D') d++;
    }
    if(a>d) printf("Anton\n");
    else if(a<d) printf("Danik\n");
    else printf("Friendship\n");

    return 0;
}
