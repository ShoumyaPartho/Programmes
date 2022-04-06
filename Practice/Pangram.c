#include<stdio.h>

int main() {
    int n,i,m,alp[30],a;
    scanf("%d",&n);
    char ara[n+5];
    scanf("%s",ara);
    for(i=0;i<26;i++) alp[i]=0;
    for(i=0;i<n;i++) {
        if(ara[i]>='A' && ara[i]<='Z') ara[i]='a'+ara[i]-'A';
        m=(int)ara[i]-97;
        alp[m]=1;
    }
    for(i=0;i<26;i++) {
        if(alp[i]==0) {
            a=0;
            break;
        }
        else if(alp[i]==1) a=1;
    }
    if(a) printf("YES\n");
    else if(!a) printf("NO\n");

    return 0;
}
