#include<stdio.h>
#include<string.h>

int main() {

    int t,l,i;
    char ara[105];
    scanf("%d",&t);

    while(t--) {
        scanf("%s",ara);
        l=strlen(ara);
        if(l<11) printf("%s\n",ara);
        else printf("%c%d%c\n",ara[0],l-2,ara[l-1]);
    }
    return 0;
}
