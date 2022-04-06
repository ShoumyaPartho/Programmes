#include<stdio.h>

int main() {
    int n,i;
    scanf("%d",&n);
    char ara1[n+1],ara2[n+1],f[n+1];
    scanf("%s %s",ara1,ara2);
    for(i=0;i<n;i++) {
        if((ara1[i]=='R' && ara2[i]=='S') || ara1[i]=='S' && ara2[i]=='R') f[i]='R';
        else if((ara1[i]=='S' && ara2[i]=='P') || (ara1[i]=='P' && ara2[i]=='S')) f[i]='S';
        else if((ara1[i]=='R' && ara2[i]=='P') || (ara1[i]=='P' && ara2[i]=='R')) f[i]='P';
        else if(ara1[i]==ara2[i]) {
            if(ara1[i]=='R') f[i]='P';
            else if(ara1[i]=='S') f[i]='R';
            else if(ara1[i]=='P') f[i]='S';
        }
    }
    if(i==n) f[i]='\0';
    printf("%s\n",f);

    return 0;
}
