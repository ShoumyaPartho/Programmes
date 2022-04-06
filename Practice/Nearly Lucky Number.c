#include<stdio.h>
#include<string.h>

int main() {

    int i,l,count=0;
    char ara[20];
    scanf("%s",ara);
    l=strlen(ara);
    for(i=0;i<l;i++) {
        if(ara[i]=='4' || ara[i]=='7') count++;
    }
    if(count==4 || count==7) printf("YES\n");
    else printf("NO\n");

    return 0;
}
